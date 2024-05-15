## Documentation

### Purpose
The purpose of the Task Manager project is to provide users with a simple and efficient tool to manage their daily tasks and to-do lists. This application aims to help users stay organized, increase their productivity, and ensure they can easily keep track of all their tasks in one place. 

### Design Decisions
1. **Task Representation:** Using a `struct` to encapsulate task attributes (ID, description, completed status).
2. **Task Storage:** Storing tasks in a `vector` for efficient access and modification.
3. **Task Identification:** Assigning unique IDs to tasks for easy reference.
4. **Data Persistence:** Saving and loading tasks from a file to ensure data is not lost.
5. **Modularity:** Breaking down functionality into separate functions for readability and maintainability.
6. **User Feedback:** Providing feedback for each operation (e.g., task added, task removed).
7. **Error Handling:** Implementing basic error handling for file operations and invalid inputs.

### Algorithms Used
- **Linear Search**: The code uses a linear search to find tasks by their ID.

### Data Structures Employed
- **Vector of Structures**: The tasks are presented as structures with ID, description and complete/incomplete values.

### Functions/Modules Created
- **`Struct Task`:** Initializes the Task with 3 identifiers.
- **`addTask()`:** Adds a task by user to the vector of tasks.
- **`editTask()`:** Provides you editing the task.
- **`removeTask()`:** Removes chosen task.
- **`markTask()`:** Mark the task completed or unmarks it.
- **`displayTasks()`:** Displays the tasks available.
- **`saveTasks()`:** Saves the tasks into the file tasks.txt.
- **`loadTasks()`:** Loads the tasks from the file tasks.txt.

### How to Use the Software
1. **Compilation and Setup**:
   - Clone the repository.
   - Compile the source code using a C++ compiler.
2. **Running the Program**:
   - Execute the compiled program.
3. **Commands**:
   - Run commands from the list of commands.

### Installation and Setup Instructions
1. **Clone the Repository**:
   ```
   git clone https://github.com/AtakOskonbaev/CRUD.git
   ```
2. **Compile the Source Code**:
   ```
   g++ main.cpp -o main
   ```
3. **Run the Program**:
   ```
   ./main
   ```
