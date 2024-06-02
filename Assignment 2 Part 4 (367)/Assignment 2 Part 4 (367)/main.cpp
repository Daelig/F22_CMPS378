//
//  main.cpp
//  Assignment 2 Part 4 (367)
//
//  Created by Darrick  on 6/2/24.
//

#include <iostream>

struct MultiplicationTable {
    int startRangeTable;
    int endRangeTable;
    int startRangeMultiplication;
    int endRangeMultiplication;
};

int main() {
    char repeat;

    do {
        MultiplicationTable table;

        // Input for the range of the multiplication table
        std::cout << "Enter the starting range for Multiplication Table: ";
        std::cin >> table.startRangeTable;
        std::cout << "Enter the ending range for Multiplication Table: ";
        std::cin >> table.endRangeTable;

        // Input for the range of numbers to multiply
        std::cout << "Enter the starting range for multiplying the numbers in Multiplication Table: ";
        std::cin >> table.startRangeMultiplication;
        std::cout << "Enter the ending range for multiplying the numbers in Multiplication Table: ";
        std::cin >> table.endRangeMultiplication;

        // Generate and display the multiplication table
        std::cout << "Here is the multiplication table for " << table.startRangeTable << " to " << table.endRangeTable << " in the range of " << table.startRangeMultiplication << " to " << table.endRangeMultiplication << std::endl;

        // Print the header row
        std::cout << "X ";
        for (int i = table.startRangeTable; i <= table.endRangeTable; ++i) {
            std::cout << i << " ";
        }
        std::cout << std::endl;

        // Print the multiplication table
        for (int i = table.startRangeMultiplication; i <= table.endRangeMultiplication; ++i) {
            std::cout << i << " ";
            for (int j = table.startRangeTable; j <= table.endRangeTable; ++j) {
                std::cout << i * j << " ";
            }
            std::cout << std::endl;
        }

        // Ask if the user wants to create another multiplication table
        std::cout << "Do you want to create another multiplication table (y/n): ";
        std::cin >> repeat;

    } while (repeat == 'y' || repeat == 'Y');

    std::cout << "Thank you for using the multiplication table generator. Goodbye!" << std::endl;

    return 0;
}
