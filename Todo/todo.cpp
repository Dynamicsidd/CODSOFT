#include <iostream>
#include <vector>
#include <string>

// Function to add a task to the to-do list
void addTask(std::vector<std::string>& todoList, const std::string& task) {
    todoList.push_back(task);
    std::cout << "Task added: " << task << std::endl;
}

// Function to remove a task from the to-do list
void removeTask(std::vector<std::string>& todoList, int index) {
    if (index >= 0 && index < todoList.size()) {
        std::cout << "Task removed: " << todoList[index] << std::endl;
        todoList.erase(todoList.begin() + index);
    } else {
        std::cout << "Invalid task index." << std::endl;
    }
}

// Function to display all tasks in the to-do list
void displayTasks(const std::vector<std::string>& todoList) {
    std::cout << "To-Do List:" << std::endl;
    for (size_t i = 0; i < todoList.size(); i++) {
        std::cout << i + 1 << ". " << todoList[i] << std::endl;
    }
}

int main() {
    std::vector<std::string> todoList;

    while (true) {
        std::cout << "Options:" << std::endl;
        std::cout << "1. Add Task" << std::endl;
        std::cout << "2. Remove Task" << std::endl;
        std::cout << "3. Display Tasks" << std::endl;
        std::cout << "4. Quit" << std::endl;
        std::cout << "Enter your choice: ";

        int choice;
        std::cin >> choice;

        switch (choice) {
            case 1: {
                std::cin.ignore(); // Clear the newline character from the buffer
                std::string task;
                std::cout << "Enter the task: ";
                std::getline(std::cin, task);
                addTask(todoList, task);
                break;
            }
            case 2: {
                int index;
                std::cout << "Enter the task index to remove: ";
                std::cin >> index;
                removeTask(todoList, index - 1); // Subtract 1 to convert to 0-based index
                break;
            }
            case 3:
                displayTasks(todoList);
                break;
            case 4:
                std::cout << "Goodbye!" << std::endl;
                return 0;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    }

    return 0;
}
