//
//  main.cpp
//  Assignment 1
//
//  Created by Darrick  on 6/2/24.
//

#include <iostream>
#include <string>
#include <stack>
#include <queue>
#include <cctype>
#include <cmath>

int precedence(char op) {
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    if (op == '^')
        return 3;
    return 0;
}

std::queue<std::string> shuntingYard(const std::string& infix) {
    std::stack<char> operators;
    std::queue<std::string> output;
    std::string number;

    for (char token : infix) {
        if (std::isdigit(token)) {
            number += token;
        } else {
            if (!number.empty()) {
                output.push(number);
                number.clear();
            }

            if (token == '(') {
                operators.push(token);
            } else if (token == ')') {
                while (!operators.empty() && operators.top() != '(') {
                    output.push(std::string(1, operators.top()));
                    operators.pop();
                }
                operators.pop(); // Remove '('
            } else if (precedence(token) > 0) {
                while (!operators.empty() && precedence(operators.top()) >= precedence(token)) {
                    output.push(std::string(1, operators.top()));
                    operators.pop();
                }
                operators.push(token);
            }
        }
    }

    if (!number.empty()) {
        output.push(number);
    }

    while (!operators.empty()) {
        output.push(std::string(1, operators.top()));
        operators.pop();
    }

    return output;
}

double evaluateRPN(std::queue<std::string>& rpn) {
    std::stack<double> numbers;

    while (!rpn.empty()) {
        std::string token = rpn.front();
        rpn.pop();

        if (precedence(token[0]) > 0) {
            double num2 = numbers.top();
            numbers.pop();
            double num1 = numbers.top();
            numbers.pop();

            switch (token[0]) {
                case '+':
                    numbers.push(num1 + num2);
                    break;
                case '-':
                    numbers.push(num1 - num2);
                    break;
                case '*':
                    numbers.push(num1 * num2);
                    break;
                case '/':
                    numbers.push(num1 / num2);
                    break;
                case '^':
                    numbers.push(pow(num1, num2));
                    break;
            }
        } else {
            numbers.push(std::stod(token));
        }
    }

    return numbers.top();
}

int main() {
    std::string problem;
    char choice;

    do {
        std::cout << "Enter a problem to solve: ";
        std::getline(std::cin, problem);

        std::queue<std::string> rpn = shuntingYard(problem);
        double result = evaluateRPN(rpn);

        std::cout << "The answer to this problem is " << result << ".\n";

        std::cout << "Would you like to solve another problem? (Y/N) ";
        std::cin >> choice;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    } while (choice == 'Y' || choice == 'y');

    std::cout << "Thank you for using this calculator!\n";

    return 0;
}
