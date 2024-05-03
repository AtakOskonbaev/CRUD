#include <bits/stdc++.h>
using namespace std;

struct Task
{
    int id;
    string description;
    bool completed;
};

vector<Task> tasks;
int next_id = 0;

void addTask(int id, string &description)
{
    tasks.emplace_back(next_id++, description);
}


int main()
{
    int id;
    string command, description;

    while (true)
    {
        cout << "Enter command (add, remove, mark, display, save, exit)";
        cin >> command;

        if (command == "add")
        {
        }
        else if (command == "remove")
        {
        }
        else if (command == "mark")
        {
        }
        else if (command == "display")
        {
        }
        else if (command == "save")
        {
        }
        else if (command == "exit")
        {
            break;
        }
        else
        {
            cout << "Invalid command" << endl;
        }
    }

    // std::cout << "\x1B[9mThis text is strikethrough!\x1B[0m" << std::endl;
    // ofstream fout("tasks.txt");
}