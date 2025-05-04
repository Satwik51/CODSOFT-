#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Task {
    string description;
    bool completed;
};

vector<Task> tasks;

void addTask() {
    string desc;
    cout << "Enter task: ";
    getline(cin >> ws, desc); // ws clears whitespace
    tasks.push_back({desc, false});
}

void viewTasks() {
    if (tasks.empty()) {
        cout << "No tasks.\n";
        return;
    }
    for (int i = 0; i < tasks.size(); ++i) {
        cout << i + 1 << ". [" << (tasks[i].completed ? 'X' : ' ') << "] " << tasks[i].description << '\n';
    }
}

void markCompleted() {
    int num;
    viewTasks();
    cout << "Enter task number to mark as completed: ";
    cin >> num;
    if (num > 0 && num <= tasks.size()) tasks[num - 1].completed = true;
}

void removeTask() {
    int num;
    viewTasks();
    cout << "Enter task number to remove: ";
    cin >> num;
    if (num > 0 && num <= tasks.size()) tasks.erase(tasks.begin() + num - 1);
}

int main() {
    int choice;
    do {
        cout << "\n1. Add Task\n2. View Tasks\n3. Mark Completed\n4. Remove Task\n5. Exit\nChoice: ";
        cin >> choice;
        switch (choice) {
            case 1: addTask(); break;
            case 2: viewTasks(); break;
            case 3: markCompleted(); break;
            case 4: removeTask(); break;
        }
    } while (choice != 5);
    return 0;
}
