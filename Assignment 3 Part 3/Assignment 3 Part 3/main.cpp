//
//  main.cpp
//  Assignment 3 Part 3
//
//  Created by Darrick  on 12/5/23.
//

#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
int main() {
    std::string input;
    double num1, num2 = 0;
    char operation;
    std::cout << "Enter your math problem: ";
    std::getline(std::cin, input);
    std::istringstream iss(input);
    iss >> num1 >> operation;
    //Operations 
    if (operation != 's' && operation != 'c' && operation != 't' && operation != 'q') {
        iss >> num2;
    }
    switch (operation) {
        case '+':
            std::cout << "Result: " << num1 + num2 << std::endl;
            break;
        case '-':
            std::cout << "Result: " << num1 - num2 << std::endl;
            break;
        case '*':
            std::cout << "Result: " << num1 * num2 << std::endl;
            break;
        case '/':
            if (num2 != 0) {
                std::cout << "Result: " << num1 / num2 << std::endl;
            } else {
                std::cout << "Error: Division by zero." << std::endl;
            }
            break;
        case '%':
            std::cout << "Result: " << static_cast<int>(num1) % static_cast<int>(num2) << std::endl;
            break;
        case '^':
            std::cout << "Result: " << pow(num1, num2) << std::endl;
            break;
        case 's':
            std::cout << "Result: " << sin(num1) << std::endl;
            break;
        case 'c':
            std::cout << "Result: " << cos(num1) << std::endl;
            break;
        case 't':
            std::cout << "Result: " << tan(num1) << std::endl;
            break;
        case 'q':
            std::cout << "Result: " << sqrt(num1) << std::endl;
            break;
        case 'a': // for asin
                std::cout << "Result: " << asin(num1) << std::endl;
                break;
        case 'A': // for acos
                std::cout << "Result: " << acos(num1) << std::endl;
                break;
        case 'T': // for atan
                std::cout << "Result: " << atan(num1) << std::endl;
                break;
        case 'Y': // for atan2, requires two arguments
                std::cout << "Result: " << atan2(num1, num2) << std::endl;
                break;
        case 'C': // for ceil
                std::cout << "Result: " << ceil(num1) << std::endl;
                break;
        case 'B': // for abs
                std::cout << "Result: " << abs(num1) << std::endl;
                break;
        case 'F': // for floor
                std::cout << "Result: " << floor(num1) << std::endl;
                break;
        case 'M': // for max, requires two arguments
                std::cout << "Result: " << fmax(num1, num2) << std::endl;
                break;
        case 'N': // for min, requires two arguments
                std::cout << "Result: " << fmin(num1, num2) << std::endl;
                break;
        case 'L': // for log (natural logarithm)
                std::cout << "Result: " << log(num1) << std::endl;
                break;
        case 'G': // for log10
                std::cout << "Result: " << log10(num1) << std::endl;
                break;
        case 'H': // for log2
                std::cout << "Result: " << log2(num1) << std::endl;
                break;
        case 'R': // for round
                std::cout << "Result: " << round(num1) << std::endl;
                break;
        default:
            std::cout << "Invalid operation." << std::endl;
    }
    return 0;
}













