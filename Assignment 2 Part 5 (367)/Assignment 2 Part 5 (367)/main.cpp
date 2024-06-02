//
//  main.cpp
//  Assignment 2 Part 5 (367)
//
//  Created by Darrick  on 6/2/24.
//

#include <iostream>
#include <cmath>
#include <string>
#include <sstream>

struct MathProblem {
    std::string input;
    double num1, num2;
    char operation;
};

int main()
{
    MathProblem problem;

    std::cout << "Enter your math problem: ";
    std::getline(std::cin, problem.input);
    std::istringstream iss(problem.input);

    iss >> problem.num1 >> problem.operation;
    if (problem.operation != 's' && problem.operation != 'c' && problem.operation != 't' && problem.operation != 'q') {
        iss >> problem.num2;
    }

    switch (problem.operation) {
        case '+':
            std::cout << "Result: " << problem.num1 + problem.num2 << std::endl;
            break;
        case '-':
            std::cout << "Result: " << problem.num1 - problem.num2 << std::endl;
            break;
        case '*':
            std::cout << "Result: " << problem.num1 * problem.num2 << std::endl;
            break;
        case '/':
            if (problem.num2 != 0) {
                std::cout << "Result: " << problem.num1 / problem.num2 << std::endl;
            } else {
                std::cout << "Error: Division by zero." << std::endl;
            }
            break;
        case '%':
            std::cout << "Result: " << static_cast<int>(problem.num1) % static_cast<int>(problem.num2) << std::endl;
            break;
        case '^':
            std::cout << "Result: " << pow(problem.num1, problem.num2) << std::endl;
            break;
        case 's':
            std::cout << "Result: " << sin(problem.num1) << std::endl;
            break;
        case 'c':
            std::cout << "Result: " << cos(problem.num1) << std::endl;
            break;
        case 't':
            std::cout << "Result: " << tan(problem.num1) << std::endl;
            break;
        case 'q':
            std::cout << "Result: " << sqrt(problem.num1) << std::endl;
            break;
        case 'a': // for asin
                std::cout << "Result: " << asin(problem.num1) << std::endl;
                break;
        case 'A': // for acos
                std::cout << "Result: " << acos(problem.num1) << std::endl;
                break;
        case 'T': // for atan
                std::cout << "Result: " << atan(problem.num1) << std::endl;
                break;
        case 'Y': // for atan2, requires two arguments
                std::cout << "Result: " << atan2(problem.num1, problem.num2) << std::endl;
                break;
        case 'C': // for ceil
                std::cout << "Result: " << ceil(problem.num1) << std::endl;
                break;
        case 'B': // for abs
                std::cout << "Result: " << abs(problem.num1) << std::endl;
                break;
        case 'F': // for floor
                std::cout << "Result: " << floor(problem.num1) << std::endl;
                break;
        case 'M': // for max, requires two arguments
                std::cout << "Result: " << fmax(problem.num1, problem.num2) << std::endl;
                break;
        case 'N': // for min, requires two arguments
                std::cout << "Result: " << fmin(problem.num1, problem.num2) << std::endl;
                break;
        case 'L': // for log (natural logarithm)
                std::cout << "Result: " << log(problem.num1) << std::endl;
                break;
        case 'G': // for log10
                std::cout << "Result: " << log10(problem.num1) << std::endl;
                break;
        case 'H': // for log2
                std::cout << "Result: " << log2(problem.num1) << std::endl;
                break;
        case 'R': // for round
                std::cout << "Result: " << round(problem.num1) << std::endl;
                break;

        default:
            std::cout << "Invalid operation." << std::endl;
    }

    return 0;
}

