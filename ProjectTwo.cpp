// ProjectTwo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

// Course Structure
struct Course {
    string courseNumber;
    string courseTitle;
    vector<string> prerequisites;
};

//Node Structure
struct Node {
    Course course;
    Node* left;
    Node* right;

    Node(Course c) {
        course = c;
        left = nullptr;
        right = nullptr;
    }
};

//Binary Search Tree
class BinarySearchTree {
private:
    Node* root;
    Node* insert(Node* node, Course course);
    void inOrder(Node* node);
    Course search(Node* node, string courseNumber);

public:
    BinarySearchTree();
    void Insert(Course course);
    void PrintInOrder();
    Course Search(string courseNumber);
};

//Constructor
BinarySearchTree::BinarySearchTree() {
    root = nullptr;
}

// Public Insert
void BinarySearchTree::Insert(Course course) {
    root = insert(root, course);
}

//Private Insert (recursive)
Node* BinarySearchTree::insert(Node* node, Course course) {
    if (node == nullptr) {
        return new Node(course);
    }

    if (course.courseNumber < node->course.courseNumber) {
        node->left = insert(node->left, course);
    }
    else {
        node->right = insert(node->right, course);
    }

    return node;
}

//In-Order Traversal (Sorted Print)
void BinarySearchTree::PrintInOrder() {
    inOrder(root);
}

void BinarySearchTree::inOrder(Node* node) {
    if (node == nullptr) {
        return;
    }

    //Left
    inOrder(node->left);

    //Root
    cout << node->course.courseNumber << ", " << node->course.courseTitle << endl;

    //Right
    inOrder(node->right);
}

//Search Function
Course BinarySearchTree::Search(string courseNumber) {
    return search(root, courseNumber);
}

Course BinarySearchTree::search(Node* node, string courseNumber) {
    if (node == nullptr) {
        return Course(); // empty
    }

    if (node->course.courseNumber == courseNumber) {
        return node->course;
    }

    if (courseNumber < node->course.courseNumber) {
        return search(node->left, courseNumber);
    }
    else{
        return search(node->right, courseNumber);
    }
}

//Load File and Parse CSV
void loadCourses(string filename, BinarySearchTree& bst) {
    ifstream file(filename);

    if (!file.is_open()) {
        cout << "Error: Couldn't open file." << endl;
        return;
    }

    string line;

    while (getline(file, line)) {
        stringstream ss(line);
        string token;

        Course course;

        //Course Number
        getline(ss, course.courseNumber, ',');

        //Course Title
        getline(ss, course.courseTitle, ',');

        //Prereqs
        while (getline(ss, token, ',')) {
            if (!token.empty()) { //ignore empty entries
                course.prerequisites.push_back(token);
            }
        }

        //Insert into search tree
        bst.Insert(course);
    }

    file.close();

    cout << "Courses loaded" << endl;
}

void printCourse(BinarySearchTree& bst, string courseNumber) {
    Course course = bst.Search(courseNumber);

    if (course.courseNumber.empty()) {
        cout << "Course wasn't found" << endl;
        return;
    }

    cout << course.courseNumber << ", " << course.courseTitle << endl;

    if (course.prerequisites.empty()) {
        cout << "Prerequisites: None" << endl;
    }
    else {
        cout << "Prerequisites: ";

        for (int i = 0; i < course.prerequisites.size(); i++) {
            string prereq = course.prerequisites[i];

            Course prereqCourse = bst.Search(prereq);

            cout << prereq;

            if (!prereqCourse.courseTitle.empty()) {
                cout << " (" << prereqCourse.courseTitle << ")";
            }

            if (i < course.prerequisites.size() - 1) {
                cout << ", ";
            }
        }

        cout << endl;
    }
}

int main()
{
    BinarySearchTree bst;
    string filename;
    int choice = 0;

    while (choice != 9) {
        cout << "\nEnter one of the following:" << endl;
        cout << "1 for Load Data" << endl;
        cout << "2 for Print Course List" << endl;
        cout << "3 for Print a Single Course" << endl;
        cout << "9 for Exit" << endl;
        cin >> choice;
           
        //Input validation in case user enters random nonsense
        if (cin.fail()) {
            cin.clear();
            cin.ignore(1000, '\n');
            choice = 0;
        }

        switch (choice) {
        case 1:
            cout << "Enter filename: ";
            cin.ignore();
            getline(cin, filename);
            loadCourses(filename, bst);
            break;

        case 2:
            cout << "\nCourse List:" << endl;
            bst.PrintInOrder();
            break;

        case 3:
        {
            string CourseNumber;
            cout << "Enter course number: ";
            cin >> CourseNumber;
            printCourse(bst, CourseNumber);
            break;
        }

        case 9:
            cout << "Program ended." << endl;
            break;

        default:
            cout << "Invalid option" << endl;
        }
    }
    return 0;
}
