#include <iostream>
#include <cmath>

int main() {
    char op;
    double num1;
    double num2;
    double result;
    
    std::cout << "********************** CALCULATOR ********************** \n";

    std::cout << "Enter either (+ - * /): ";
    std::cin >> op;

    std::cout << "Enter Number 1: ";
    std::cin >> num1;

    std::cout << "Enter Number 2: ";
    std::cin >> num2;

    switch(op){
        case '+':
            result = num1 + num2;
            std::cout << num1 << " " << op << " "  << num2 << " " << "= " << result;
            break;
        case '-':
            result = num1 - num2;
            std::cout << num1 << " " << op << " "  << num2 << " " << "= " << result;
            break;
        case '*':
            result = num1 * num2;
            std::cout << num1 << " " << op << " "  << num2 << " " << "= " << result;
            break;
        case '/':
            result = num1 / num2;
            std::cout << num1 << " " << op << " "  << num2 << " " << "= " << result;
            break;
        default:
            std::cout << "Invalid input";
            break;
    }
    std::cout << "\n********************************************************";
}



