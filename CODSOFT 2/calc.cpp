#include <iostream>

int main() {
    double n1, n2;
    char op;
    double res;

    std::cout << "Welcome to the Simple Calculator Program!\n";
    std::cout << "Enter the first number: ";
    std::cin >> n1;

    std::cout << "Enter an operator (+, -, *, /): ";
    std::cin >> op;

    std::cout << "Enter the second number: ";
    std::cin >> n2;

    switch(op) {
        
        case '*':
            res = n1 * n2;
            std::cout << "result: " << n1 << " * " << n2 << " = " << res << std::endl;
            break;
        
        
        case '+':
            res = n1 + n2;
            std::cout << "result: " << n1 << " + " << n2 << " = " << res << std::endl;
            break;

        case '/':
            if(n2 != 0) {
                res = n1 / n2;
                std::cout << "result: " << n1 << " / " << n2 << " = " << res << std::endl;
            } else {
                std::cout << "Error: Division by Zero.\n";
            }
            break;
        
        case '-':
            res = n1 - n2;
            std::cout << "result: " << n1 << " - " << n2 << " = " << res << std::endl;
            break;
        default:
            std::cout << "Error: Invalid operator.\n";
    }

    return 0;
}
