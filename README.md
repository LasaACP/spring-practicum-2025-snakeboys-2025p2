# Snake Game


Objective: This project aims to code a playable game of Snake in C++ and include an optimized solution to the game through a depth-first searching algorithm.


Topics: Our solver will utilize a depth searching algorithm, including data structures like linked lists that connect each node as a square in the game. We will also use structures for each element of the game that keep track of important information like score and position. This is consistent with what we have been learning throughout the year, and this project will showcase our knowledge we gained in class. 


Organizational Roadmap: Our road map will be based on specific deadlines, as this way we can maintain efficiency while staying on track to finish by the presentation day. 

 - First, we will start with the Proposal, where we will develop an idea for what we want to accomplish during this assignment. This will ensure we have a proper baseline for our project and ensure we have our fundamental goals agreed upon. (Finish by 4/30)

 - After we finish the proposal, we will create a Kanban board similar to the one we made during the midterm to keep organized of all the different functions and assign tasks to each group member. (Finish by 5/3)

 - Following the creation of the Kanban board, we will undergo the Scrum process, having daily class meetings as a group to make sure we are fully organized, and after each task is completed, we will move it into the finished area of the Kanban board. Utilizing Scrum will help us see the projected estimation of time that we will finish the assignment. (5/7 - 5/22)

 - We will use Git to pull and push code to optimize efficiency and to ensure proper code techniques. This will ensure organization and give our group members an advanced tool to utilize. (Entire Coding Process)

 - Lastly, once our code is running correctly, we will make a ReadMe to summarize what we did and how the code works. (5/22).


Code Milestones:

Planned Code Sections For Each Member (Each will involve a separate class):
 - Board: Involves a 2D array for each direction a snake can move. The data structure is perfect for a board, as it is a fixed size and needs to have high efficiency. Potentially could store a structure in each index to increase data storage efficiency. 
Snake/Scoreboard: An object on the board that can dynamically grow in size via a linked list data structure after consuming an apple, and track how many apples the snake has consumed.
 - Apple Generator: Places an apple randomly on the board. 

Planned Code Sections for Entire Group:
 - Main: Uses every class and organizes each part together to make a functional game that the user can play in the terminal. 
 - Solver: Using depth search algorithms, find the shortest and most efficient path to the nearest apple while avoiding the “tail” of the snake. Repeat until the entire board is filled with the snake. 

Overall Goals
 - Create pseudocode for each section in the code in Github so anyone who edits the finished version later will be able to understand properly. This is in the case a member in the future requires assistance from another team member that might not be well versed in the code they wrote. Finish pseudocode by 5/7.
 - Following the Kanban board, each member will attempt to complete their specific tasks on time. The Kanban board will ensure that we understand our tasks and be able to track progress. 
 - Hold meetings every class to go over progress and any go over troubleshooting that a specific member might have. Repeat this process until all members have completed their assigned tasks.


Outcome/Assessment: The Snake Game project will aim to deliver a dynamic and engaging gameplay experience while demonstrating a solid understanding of C++. The game is designed to include key features such as a grid-based playing field, smooth movement, and a solution that will automatically detect the most optimal route while avoiding obstacles. 

The project will be evaluated by the following criteria:
 - Functionality: The game will operate without glitches, allowing players to control the snake seamlessly as it grows with each piece of food collected. Ideally, player input has little to know latency for smooth interaction.
Efficiency: The code will be optimized to ensure the game runs without performance issues, even as the snake length increases or the difficulty dynamically adjusts during gameplay.
 - Innovation: Creation of “guided mode,” which would be a program that is able to find the most optimal route if feasible within time constraints

Like previously mentioned, the development process will be structured into incremental milestones to ensure steady progress and equal distribution of work for each member. The project will undergo comprehensive testing to validate its performance and ensure a seamless user experience. Completion is expected within the assigned time frame, aligning with our project deadlines
