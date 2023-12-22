//
//  main.cpp
//  CMPS 301 Final
//
//  Created by Darrick  on 12/20/23.
//

#include <iostream>
#include <algorithm>
#include <string>
#include <stdlib.h>
using namespace std;

string auth[10] = { "0" , "0" , "0" , "0", "0", "0", "0", "0", "0", "0" };
string BookName[10] = { "0" , "0" , "0" , "0", "0", "0", "0", "0", "0", "0" };
string booki = " ", authi = " ", check = " ";
int i = 0;


void AddBook() {
    int i = 0;\
    bool found = false;
    for (i = 0; i <= 9; i++) {
        if (auth[i] == "0") {
            found = true;
            cout << "Enter Book Name: ";
            getline(cin, booki);
            cout << "\nEnter Author Name: ";
            getline(cin, authi);
            auth[i] = authi;
            BookName[i] = booki;
            break;
        }
    }
    if (found == true) {
        cout << "\nBook has been successfully added!\n";
    }
    else {
        cout << "\nThere was no empty book slots!\n";
    }
}

void EditBook() {
    cout << "What book do you want to edit? ";
    getline(cin, booki);
    bool found = false;
    for (i = 0; i <= 9; i++) {
        if (BookName[i] == booki) {
            found = true;
            cout << "\nBook Name and Author: " << BookName[i] << ", " << auth[i] << "\nDo you want to change the book name? (Yes/No): ";
            getline(cin, check);
            transform(check.begin(), check.end(), check.begin(), toupper);
            if (check == "YES" || check == "Y") {
                cout << "\nWhat do you want to change the book name to? ";
                getline(cin, booki);
                BookName[i] = booki;
                cout << "\nBook name has been changed! \n"
                    "Do you want to change the Author name? ";
                    getline(cin, check);
                transform(check.begin(), check.end(), check.begin(), toupper);
                if (check == "YES") {
                    cout << "\nWhat do you want to change the author name to? (Yes/No): ";
                    getline(cin, authi);
                    auth[i] = authi;
                    cout << "Author name has been changed! \n";
                    break;
                }
                else if (check == "NO") {
                    cout << "Author name will not be changed!\n";
                    break;
                }
                else {
                    cout << "Input was not recognized!\n";
                    break;
                }
            }
            else if (check == "NO" || check == "N") {

                cout << "\nBook will not be edited.\n"
                    "Do you want to change the Author name? (Yes/No):";
                getline(cin, check);
                transform(check.begin(), check.end(), check.begin(), toupper);
                if (check == "YES") {
                    cout << "\nWhat do you want to change the author name to? ";
                    getline(cin, authi);
                    auth[i] = authi;
                    cout << "Author name has been changed! \n";
                    break;
                }
                else if (check == "NO") {
                    cout << "Author name will not be changed!\n";
                    break;
                }
                else {
                    cout << "Input was not recognized!\n";
                    break;
                }
                    
            }
            else {
                cout << "Your input was not recognized!\n";
                break;
            }
        }
    }
    if (!found) {
        cout << "\nBook was not found!\n";
    }
}
void SearchBook() {
    bool found = false;
    cout << "What book would you like to search? ";
    getline(cin, booki);
    for (i = 0; i <= 9; i++) {
        if (booki == BookName[i]) {
            cout << "\nBook Name and Author: " << BookName[i] << ", " << auth[i] << endl;
            found = true;
        }
    }
    if (!found) {
        cout << "Book name is not found!\n";
    }
}
void DeleteBook() {
    bool found = false;
    cout << "What book would you like to delete? \n";
    getline(cin, booki);
    for (i = 0; i <= 9; i++) {
        if (booki == BookName[i]) {
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Book name is not found!\n";
    }
    else {
        BookName[i] = "0";
        auth[i] = "0";
        cout << "Book has been deleted from the inventory!\n";
    }
}

void MainMenu() {
    string choice = "0";
    system("cls");
    cout << "Welcome to The Biblioteca Library!\n"
        "Please select the following options:\n"
        "1 - Add a Book\n"
        "2 - Edit a Book\n"
        "3 - Search a Book\n"
        "4 - Delete a Book\n\n"
        "Type in your option: ";
    getline(cin, choice);
    transform(choice.begin(), choice.end(), choice.begin(), toupper);
    if (choice == "ADD A BOOK" || choice == "1") {
        AddBook();
    }
    else if (choice == "EDIT A BOOK" || choice == "2") {
        EditBook();
    }
    else if (choice == "SEARCH A BOOK" || choice == "3") {
        SearchBook();
    }
    else if (choice == "DELETE A BOOK" || choice == "4") {
        DeleteBook();
    }
    else {
        cout << "Input was not recognized.\n";
    }
}

int main()
{
    string loo = " ";
    while (loo != "YES") {
        MainMenu();
        cout << "Are you done? ";
        getline(cin, loo);
        transform(loo.begin(), loo.end(), loo.begin(), toupper);
        system("cls");
    }
    cout << "\n\n\n\n\n\n\n\n\n\nThanks for visiting The Biblioteca Library!\n\n\n\n\n\n\n\n\n\n";
    
    return 0;
}
