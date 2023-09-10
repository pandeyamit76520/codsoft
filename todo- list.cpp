#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Task {
    string description;
    bool completed;
};

vector<Task> tasks;

void addTask(const string& description) {
    Task newTask;
    newTask.description = description;
    newTask.completed = false;
    tasks.push_back(newTask);
    cout << "Task added: " << description << endl;
}

void viewTasks() {
    cout << "Tasks:" << endl;
    for (size_t i = 0; i < tasks.size(); ++i) {
        cout << i + 1 << ". ";
        if (tasks[i].completed) {
            cout << "[X] ";
        } else {
            cout << "[ ] ";
        }
        cout << tasks[i].description << endl;
    }
}

void markTaskCompleted(size_t index) {
    if (index >= 0 && index < tasks.size()) {
        tasks[index].completed = true;
        cout << "Task marked as completed: " << tasks[index].description << endl;
    } else {
        cout << "Invalid task index." << endl;
    }
}

void deleteTask(size_t index) {
    if (index >= 0 && index < tasks.size()) {
        cout << "Task removed: " << tasks[index].description << endl;
        tasks.erase(tasks.begin() + index);
    } else {
        cout << "Invalid task index." << endl;
    }
}

int main() {
    cout << "Welcome to the To-Do List Manager!" << endl;

    while (true) {
        cout << "\nChoose an option:" << endl;
        cout << "1. Add task" << endl;
        cout << "2. View tasks" << endl;
        cout << "3. Mark task as completed" << endl;
        cout << "4. Delete task" << endl;
        cout << "5. Exit" << endl;

        int choice;
        cin >> choice;

        switch (choice) {
            case 1: {
                cin.ignore(); 
                cout << "Enter the task description: ";
                string description;
                getline(cin, description);
                addTask(description);
                break;
            }
            case 2:
                viewTasks();
                break;
            case 3: {
                cout << "Enter the task index to mark as completed: ";
                size_t index;
                cin >> index;
                markTaskCompleted(index - 1);
                break;
            }
            case 4: {
                cout << "Enter the task index to delete: ";
                size_t index;
                cin >> index;
                deleteTask(index - 1);
                break;
            }
            case 5:
                cout << "Exiting the program." << endl;
                return 0;
            default:
                cout << "Invalid choice. Please select a valid option." << endl;
        }
    }

    return 0;
}

