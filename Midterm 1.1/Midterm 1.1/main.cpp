//
//  main.cpp
//  Midterm 1.1
//
//  Created by Darrick  on 11/29/23.
//

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    char premium = ' ', blockbuster = ' ';
    string movie = " ", time = " ";
    int age = 0, total = 0;
    // B stands for blockbuster, movie name must be typed in full, movie times must be typed in full 
    cout << "|------------------------Welcome to Cinemark Theaters------------------------|\n";
    cout << "|--------------------Movie------------------|-------------Times--------------|\n";
    cout << "|B         Five Nights at Freddys           |12:35PM, 1:45PM, 3:10PM, 5:45PM |\n";
    cout << "|               The Marvels                 |4:15PM                          |\n";
    cout << "|B           Into the Multiverse            |12:35PM, 1:45PM, 3:10PM, 5:45PM |\n";
    cout << "|----------------------------------------------------------------------------|\n";
    cout << "What is your age? ";
    cin >> age;
    cout << "Enter the movie that you would like to watch : ";
    cin.ignore();
    getline(cin, movie);
    cout << "Enter the time of the movie : ";
    cin >> time;
    cout << "Is the movie a blockbuster (Y/N) : ";
    cin >> blockbuster;
    cout << "Do you prefer premium seating (Y/N) : ";
    cin >> premium;
    if (age <= 12) {
        total = 5;
    }
    else if (age >= 13 && age <= 59) {
        total = 10;
    }
    else if (age >= 60) {
        total = 7;
    }
    else {
        cout << "Your age input was not recognized, please try again.";
        
        return 0;
    }
    if (movie == "Five Nights at Freddys" || movie == "Into the Multiverse") {
        total += 5;
    }
    else if (movie == "The Marvels") {
        //not a blockbuster, dont add $5
    }
    else {
        cout << "Your movie input was not recognized, please try again." << movie;
        return 0;
    }
    if (time == "12:35PM" || time == "1:45PM" || time == "3:10PM" || time == "4:15PM") {
        total -= 2;
    }
    else if (time == "5:45PM") {
        //no discount
    }
    else {
        cout << "Your time input was not recognized, please try again.";
        return 0;
    }
    if (premium == 'y' || premium == 'Y') {
        total += 3;
    }
    else if (premium == 'n' || premium == 'N') {
        //no upcharge
    }
    else {
        cout << "Your seat input was not recognized, please try again.";
        return 0;
    }
    for (int i = 0; i < movie.length(); i++) {
        if (i == 0) {
            movie[i] = toupper(movie[i]);
        }
        else if (movie[i] == ' ') {
            movie[i + 1] = toupper(movie[i + 1]);
        }
    }
    
    if (blockbuster == 'y' || blockbuster == 'Y') {
        if (premium == 'y' || premium == 'Y') {
            cout << "Total cost for viewing " << movie << " with premium seating and being a blockbuster movie is $" << total << ".";
        }
        else if (premium == 'n' || premium == 'N') {
            cout << "Total cost for viewing " << movie << " being a blockbuster movie is $" << total << ".";
        }
    }
    else if (blockbuster == 'n' || blockbuster == 'N') {
        if (premium == 'y' || premium == 'Y') {
            cout << "Total cost for viewing " << movie << " with premium seating is $" << total << ".";
        }
        else if (premium == 'n' || premium == 'N') {
            cout << "Total cost for viewing " << movie << " is $" << total << ".";
            
        }
        
    }
    return 0;
}
