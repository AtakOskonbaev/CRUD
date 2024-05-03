#include <bits/stdc++.h>
using namespace std;

struct Task
{
    int id;
    string description;
    bool completed;

    Task(int taskId, string desc, bool comp = false)
        : id(taskId), description(move(desc)), completed(comp) {}
};

vector<Task> tasks;
int next_id = 0;

void addTask(string &description)
{
    tasks.emplace_back(++next_id, description);
}

void removeTask(int id)
{
    // found thid code from stackoveflow https://stackoverflow.com/questions/32062126/how-to-remove-a-struct-element-from-a-vector
    tasks.erase(remove_if(tasks.begin(), tasks.end(), [&](Task const &task)
                          { return task.id == id; }),
                tasks.end());
}

void markTask(int id)
{
    if (tasks[id].completed == true)
    {
        tasks[id].completed = false;
    }
    tasks[id].completed = true;
}

void displayTasks()
{
    cout << "Tasks:\n";
    for (const auto &task : tasks)
    {
        cout << "ID: " << task.id << " - Description: " << task.description
             << " - Completed: " << (task.completed ? "Yes" : "No") << endl;
    }
}

void saveTasks()
{
    ofstream file("tasks.txt");
    for (const auto &task : tasks)
    {
        file << task.id << " "<< task.completed << " " << task.description << "\n";
    }
    // file.close();
}

void loadTasks()
{
    ifstream file("tasks.txt");
    tasks.clear();
    int id;
    string description;
    bool completed;
    while (file >> id >> completed)
    {
        getline(file, description);
        tasks.emplace_back(id, description, completed);
    }
    file.close();
        next_id = id;
}

int main()
{
    int id;
    string command, description;

    while (true)
    {
        cout << "Enter command (add, remove, mark, display, save, load, exit)" << endl;
        cin >> command;

        if (command == "add")
        {
            cout << "Enter description: " << endl;
            cin.ignore();
            getline(cin, description);
            addTask(description);
        }
        else if (command == "remove")
        {
            cout << "Enter ID to remove: " << endl;
            cin >> id;
            removeTask(id);
            cout << "Succesfully removed" << endl;
        }
        else if (command == "mark")
        {
            cout << "Enter ID to mark/unmark: " << endl;
            cin >> id;
            markTask(id - 1);
            cout << "Succesfully marked" << endl;
        }
        else if (command == "display")
        {
            displayTasks();
        }
        else if (command == "save")
        {
            saveTasks();
            cout << "Tasks saved to tasks.txt" << endl;
            cout << "Don't forget to exit with commands!" << endl;
        }
        else if (command == "load")
        {
            loadTasks();
            cout << "Tasks loaded from tasks.txt" << endl;
        }
        else if (command == "exit")
        {
            cout << "Bye!" << endl;
            break;
        }
        else
        {
            cout << "Invalid command" << endl;
        }
    }

    // std::cout << "\x1B[9mThis text is strikethrough!\x1B[0m" << std::endl;
}