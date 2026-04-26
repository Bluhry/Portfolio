# Portfolio
About ChadaTechClocks.zip
This project is a mockup of a clock that shows both 24 and 12 hour times. The user is able to select an initial time and then add a second minute or hour, with the clock then displaying in 12 and 24 hour simultaneously.

I believe what I did well was separating the code out into multiple files for organization, and checking input validation so the program didn't run into any major issues.

I believe I could do commentation better, I've struggled in the past with writing useful comments that add clarity to my work.

What I found challenging about this project, is initially if the user entered in nonsense the code would run forever due to a bug. What I did was go on stack overflow looking for this issue and was able to find some community contributed code I was able to implement that made this stop occuring, I learned from the course I wrote this assignment for that there are several resources for coders online, and that the community loves to help people with implementation.

Input validation is a key takeaway as I said, and I applied this concept to other projects I've worked on since then.

This program is made maintainable and readable by being separated out into a header and 2 cpp files, this means that adding new functions is easily doable if this had been a real program to be implemented for this company. 


About CS 230 Project 3 Software Design
The client for this project was The Gaming Room, which wanted to expand its android game Draw It or Lose it into a web-based, multi-platform app. The software had to support multiple teams and players, enforce unique game, team, and player names, allow only one game instance at a time, scale to many users and remain secure and performant across OS's.

I did particularly well in evaluating operating platforms and system architectures, ultimately I recommended a Linux-based server for scalability, stability, and cost efficiency. I also clearly tied object oriented principles and design patterns to the functional needs of the game.

Creating the design document helped by forcing decisions before coding, which reduced ambiguity. Defining requirements, constraints, and system structure early made implementation more deliberate and aligned with goals.

I would revise the System Architecture View to better describe the client-server model and data flow. Adding a clearer high-levle architecture description would improve readability and strengthen the connection between design and implementation.

User needs were addressed by focusing on fair gameplay, reliability, responsiveness, and cross-platform accessibility. Features like unique identifiers, centralized game management, and in-memory data handling were designed to support these goals.

I approached design by breaking the problem into requirements, constraints, architecture, and implementation, using object-oriented principles and platform analysis to guide decisions. In future projects, I would use the same approach while adding more early architectural diagrams, scalability planning, and security considerations.

About DriverPass System Design Project
Project Summary
The DriverPass project involved designing a cloud-based web system for a driving education company. The client, DriverPass, wanted a system that would help students better prepare for their DMV exams by offering online practice tests, structured lesson packages, and on-the-road lesson scheduling. The system needed to support multiple roles, including customers, instructors, secretaries, administrators, and IT staff. My task was to translate the client's business needs into clear requirements and structured system designs using UML diagrams and supporting documentation.

What I did Well
One of the strongest aspects of my work was maintaining consistency between requirements and design, the functional and nonfunctional requirements I defined in project One were directly reflected in the UML diagrams I created in Project Two. I was careful to model decision points, validation steps, and role-based access clearly so that the system design aligned with the client's operational needs. I also ensured that scheduling logic, test tracking, and resource assignment (drivers and vehicles) were represented structurally and behaviorally across activity, sequence, and class diagrams.

What I would Revise
If I were to reive one part of my work, I would further refine the class diagram to increase clarity in relationships and multiplicity definitions. While the structure is accurate, I could improve visual organization and explicitly annotate more constraints to make the system model even clearer for future developers. I would also expand documentation around edge cases, such as payment failures or scheduling conflicts, to strengthen the completenedss of the design.

Interpreting User Needs
I approached the design by carefully reviewing the client interview transcript and identifying measurable system behaviors from conversational statements. Considering user needs is critical because systems exist to solve real operational problems. If design decisions are not grounded in user requirements, the final system may function technically but fail to deliver business value.

My Approach to Designing Software
When designing software, I focus first on understanding the problem space before thinking about implementation details. I identify core entities, define relationships, and model workflows to understand how data moves through the system. I use UML diagrams to view the system from multiple perspectives: structural, behavioral, and interaction-based. In future projects, I would continue using structured requirements analysis, stakeholder interviews, and iterative diagram refinement to ensure alignment between business goals and technical architecture.

Sprint Review and Retrospective Reflection for SDLC
Interpreting User Needs and Implementing Them Into a Program
Intrepreting user needs starts with understanding the problem from the user's perpsective rather than focusing immediately on technical solutions. In this course, creating user stories helped structure those needs in a clear and actionable way. By writing stories in the format of "As a user, I want..." I was able to focus on the value the feature should deliver rather than the implementation details.

User stories also helped translate abstract ideas into measurable acceptance criteria. Instead of building features based on assumptions, the acceptance criteria defined what success looked like. This made it easier to design, test, and validate functionality. Through this process, I learned that effecftive development starts with clarity about user outcomes, not just code execution.

My Approach to Developing Programs and Future Agile Practices
When developing programs, I now approach the work incrementally. Rather than attempting to design everything upfront, I prefer breaking the work into manageable components that can be refined over time. This mirrors the Scrum-Agile framework we applied through the SNHU Travel project.

In future development work, I hope to incorporate:
Writing clear user stories before beginning implementation
Defining acceptance criteria to guide testing
Iterative development cycles
Regular reflection and refinement of work
Clear communication when requirements change

The Agile mindset of inspection and adaptation stood out to me during this course. When project requirements shifted towards wellness-focused travel, the structured yet flexible approach allowed adjustments without starting over. That adaptability is something I intend to carry into future projects.

Being a Good Team Member in Software Development
Being a good team member in software development means more than completing assigned tasks. It requires communication, accountability, and respect for shared goals. Transparency is essential, team members should clearly communicate progress, challenges, and uncertainties to prevent misunderstandings.

A strong team member also understands their role while recognizing how it connects to others. Whether acting as a developer, product owner, or tester in simulated scenarios, I learned that collaboration between roles improves outcomes. Clear expectations and proactive communication reduce rework and increase overall efficiency.

Ultimately, good teamwork in software development means contributing to a shared objective, remaining adaptable to change, and supporting continuous improvement.


On CS 305 project, code base and document
Artemis Financial, a consulting company that develops financial plans for clients, wanted to improve the security of its wed application by ensuring secure communication and verifying data integrity.
I identified concerns in the app and improved it by implementing SHA-256 hashing for data verification and configuring HTTPS using SSL/TLS. This ensured that data could not be easily intercepted or altered. Coding securely is important because it protects sensitive information, maintains user trust, and reduces the risk of breaches.
One of the more challenging parts of the project was interpreting the OWASP Dependency-Check results, since many vulnerabilities came from outdated dependencies rather than my own code. This helped understand how to evaluate real-world security risks.
I added layers of security through hashing and encrypted communication. To verify functionality and security, I tested the app manually and confirmed it ran correctly over HTTPS. 

Tools and practices used in this project included Java Keytool for certificate generation, Spring Boot configuration for HTTPS, and OWASP Dependency-Check for vulnerability scanning. This project demonstrates my ability to identify vulnerabilities, implement secure coding practices, and validate application security.
