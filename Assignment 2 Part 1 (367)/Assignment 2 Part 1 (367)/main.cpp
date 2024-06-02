//
//  main.cpp
//  Assignment 2 Part 1 (367)
//
//  Created by Darrick  on 6/2/24.
//

#include <iostream>
#include <string>
#include <stack>
#include <queue>
#include <cctype>
#include <cmath>

struct Calculator {
    std::string problem;
    char choice;
    std::stack<char> operators;
    std::queue<std::string> output;
    std::string number;
    std::stack<double> numbers;
};

int precedence(char op) {
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    if (op == '^')
        return 3;
    return 0;
}

std::queue<std::string> shuntingYard(const std::string& infix, Calculator& calc) {
    calc.operators = std::stack<char>();
    calc.output = std::queue<std::string>();
    calc.number = "";

    for (char token : infix) {
        if (std::isdigit(token)) {
            calc.number += token;
        } else {
            if (!calc.number.empty()) {
                calc.output.push(calc.number);
                calc.number.clear();
            }

            if (token == '(') {
                calc.operators.push(token);
            } else if (token == ')') {
                while (!calc.operators.empty() && calc.operators.top() != '(') {
                    calc.output.push(std::string(1, calc.operators.top()));
                    calc.operators.pop();
                }
                calc.operators.pop(); // Remove '('
            } else if (precedence(token) > 0) {
                while (!calc.operators.empty() && precedence(calc.operators.top()) >= precedence(token)) {
                    calc.output.push(std::string(1, calc.operators.top()));
                    calc.operators.pop();
                }
                calc.operators.push(token);
            }
        }
    }

    if (!calc.number.empty()) {
        calc.output.push(calc.number);
    }

    while (!calc.operators.empty()) {
        calc.output.push(std::string(1, calc.operators.top()));
        calc.operators.pop();
    }

    return calc.output;
}

double evaluateRPN(std::queue<std::string>& rpn, Calculator& calc) {
    calc.numbers = std::stack<double>();

    while (!rpn.empty()) {
        std::string token = rpn.front();
        rpn.pop();

        if (precedence(token[0]) > 0) {
            double num2 = calc.numbers.top();
            calc.numbers.pop();
            double num1 = calc.numbers.top();
            calc.numbers.pop();

            switch (token[0]) {
                case '+':
                    calc.numbers.push(num1 + num2);
                    break;
                case '-':
                    calc.numbers.push(num1 - num2);
                    break;
                case '*':
                    calc.numbers.push(num1 * num2);
                    break;
                case '/':
                    calc.numbers.push(num1 / num2);
                    break;
                case '^':
                    calc.numbers.push(pow(num1, num2));
                    break;
            }
        } else {
            calc.numbers.push(std::stod(token));
        }
    }

    return calc.numbers.top();
}

int main() {
    Calculator calc;
    
    do {
        std::cout << "Enter a problem to solve: ";
        std::getline(std::cin, calc.problem);

        std::queue<std::string> rpn = shuntingYard(calc.problem, calc);
        double result = evaluateRPN(rpn, calc);

        std::cout << "The answer to this problem is " << result << ".\n";

        std::cout << "Would you like to solve another problem? (Y/N) ";
        std::cin >> calc.choice;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    } while (calc.choice == 'Y' || calc.choice == 'y');

    std::cout << "Thank you for using this calculator!\n";

    return 0;
}

