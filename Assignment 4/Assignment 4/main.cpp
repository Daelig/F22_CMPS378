//
//  main.cpp
//  Assignment 4
//
//  Created by Darrick  on 12/17/23.
//

#include <iostream>
int main() {
    char repeat;
    do {
        int startRangeTable, endRangeTable, startRangeMultiplication, endRangeMultiplication;
        // Input for the range of the multiplication table
        std::cout << "Enter the starting range for Multiplication Table: ";
        std::cin >> startRangeTable;
        std::cout << "Enter the ending range for Multiplication Table: ";
        std::cin >> endRangeTable;
        // Input for the range of numbers to multiply
        std::cout << "Enter the starting range for multiplying the numbers in Multiplication Table: ";
        std::cin >> startRangeMultiplication;
        std::cout << "Enter the ending range for multiplying the numbers in Multiplication Table: ";
        std::cin >> endRangeMultiplication;
        // Generate and display the multiplication table
        std::cout << "Here is the multiplication table for " << startRangeTable << " to " << endRangeTable << " in the range of " << startRangeMultiplication << " to " << endRangeMultiplication << std::endl;
        // Print the header row
        std::cout << "X ";
        for (int i = startRangeTable; i <= endRangeTable; ++i) {
            std::cout << i << " ";
        }
        std::cout << std::endl;
        // Print the multiplication table
        for (int i = startRangeMultiplication; i <= endRangeMultiplication; ++i) {
            std::cout << i << " ";
            for (int j = startRangeTable; j <= endRangeTable; ++j) {
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
