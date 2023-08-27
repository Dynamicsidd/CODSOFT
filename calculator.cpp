#include <iostream>

void calculator(long long a, char operation, long long b) {
    switch (operation) {
        case '+': {
            long result = a + b;
            std::cout << a << " + " << b << " is " << result << std::endl;
            std::cout << "Good One" << std::endl;
            std::cout << "Next challenge please" << std::endl;
            break;
        }
        case '-': {
            long result = a - b;
            std::cout << a << " - " << b << " is " << result << std::endl;
            std::cout << "Good One" << std::endl;
            std::cout << "Next challenge please" << std::endl;
            break;
        }
        case '*': {
            long long result = a * b;
            std::cout << a << " * " << b << " is " << result << std::endl;
            std::cout << "Good One" << std::endl;
            std::cout << "Next challenge please" << std::endl;
            break;
        }
        case '/': {
            if (b != 0) {
                long result = a / b;
                std::cout << a << " / " << b << " is " << result << std::endl;
                std::cout << "Good One" << std::endl;
                std::cout << "Next challenge please" << std::endl;
            } else {
                std::cout << "Error: Division by zero is not allowed." << std::endl;
            }
            break;
        }
        default: {
            std::cout << "Enter the valid operation" << std::endl;
            std::cout << "Try Again" << std::endl;
        }
    }
}

int main() {
    std::cout << "Welcome to Simple Calculator" << std::endl;
    std::cout << "Perform operations like + - * /" << std::endl;
    std::cout << "Enter The 1st Number" << std::endl;
    long long num1;
    std::cin >> num1;
    std::cout << "Enter The Operation To Perform" << std::endl;
    char ch;
    std::cin >> ch;
    std::cout << "Enter the 2nd number" << std::endl;
    long long num2;
    std::cin >> num2;
    calculator(num1, ch, num2);
}
