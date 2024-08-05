#include <iostream>
#include <vector>
#include <string>

class Task {
public:
    std::string desc;
    bool isDone;

    Task(std::string desc) : desc(desc), isDone(false) {}
};

void addTask(std::vector<Task>& tasks) {
    std::string desc;
    std::cout << "Enter the Task Content: ";
    std::cin.ignore(); 
    std::getline(std::cin, desc);
    tasks.emplace_back(desc);
    std::cout << "Task added successfully.\n";
}

void viewTasks(const std::vector<Task>& tasks) {
    if (tasks.empty()) {
        std::cout << "No tasks available.\n";
    } else {
        std::cout << "Tasks:\n";
        for (size_t i = 0; i < tasks.size(); ++i) {
            std::cout << i + 1 << ". " << tasks[i].desc 
                      << " [" << (tasks[i].isDone ? "Completed" : "Pending") << "]\n";
        }
    }
}

void markTaskCompleted(std::vector<Task>& tasks) {
    size_t taskIndex;
    std::cout << "Enter the task number to mark as completed: ";
    std::cin >> taskIndex;
    if (taskIndex > 0 && taskIndex <= tasks.size()) {
        tasks[taskIndex - 1].isDone = true;
        std::cout << "Task marked as completed.\n";
    } else {
        std::cout << "Invalid task number.\n";
    }
}

void removeTask(std::vector<Task>& tasks) {
    size_t taskIndex;
    std::cout << "Enter the task number to remove: ";
    std::cin >> taskIndex;
    if (taskIndex > 0 && taskIndex <= tasks.size()) {
        tasks.erase(tasks.begin() + taskIndex - 1);
        std::cout << "Task removed successfully.\n";
    } else {
        std::cout << "Invalid task number.\n";
    }
}

int main() {
    std::vector<Task> tasks;
    int choice;

    do {
        std::cout << "\nTo-Do List Manager\n";
        std::cout << "1. Add Task\n";
        std::cout << "2. View Tasks\n";
        std::cout << "3. Mark Task as Completed\n";
        std::cout << "4. Remove Task\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                addTask(tasks);
                break;
            case 2:
                viewTasks(tasks);
                break;
            case 3:
                markTaskCompleted(tasks);
                break;
            case 4:
                removeTask(tasks);
                break;
            case 5:
                std::cout << "Exiting the To-Do List Manager.\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}
