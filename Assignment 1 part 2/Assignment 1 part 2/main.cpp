//
//  main.cpp
//  Assignment 1 part 2
//
//  Created by Darrick  on 10/22/23.
//

#include <iostream>
#include <iomanip>

using namespace std;

int
main ()
{
  char meal = ' ', desert = ' ';
  int meal_cost = 0, desert_cost = 0;
  cout <<
    "******Welcome to Discovery Bay Golf and Country Club Restaurant******\n"
    <<
    "|                  Meal                  |           Price          |\n"
    <<
    "---------------------------------------------------------------------\n"
    <<
    "|  Fresh Atlantic Salmon            (S)  |  $23.00                  |\n"
    <<
    "|  Ribeye                           (R)  |  $40.00                  |\n"
    <<
    "|  New York Steak                   (N)  |  $40.00                  |\n"
    <<
    "|  Filet Mignon                     (F)  |  $40.00                  |\n\n"
    <<
    "|                 Desert                 |           Price          |\n"
    <<
    "---------------------------------------------------------------------\n"
    <<
    "|  Ice Cream                        (I)  |  $3.00                   |\n"
    <<
    "|  Cookies                          (C)  |  $3.00                   |\n"
    <<
    "|  Pie                              (P)  |  $5.00                   |\n"
    <<
    "|  Fresh Fruit Bowl                 (F)  |  $5.00                   |\n"
    << endl;
  cout << "Enter a Meal that you would like to order : ";
  cin >> meal;
  cout << "\nEnter a Desert that you would like to order : ";
  cin >> desert;
  cout << endl;

  //Determine Meal cost
  if (meal == 'R' || meal == 'r' || meal == 'N' || meal == 'n' || meal == 'F'
      || meal == 'f')
    {
      meal_cost = 40;
    }
  else if (meal == 's' || meal == 'S')
    {
      meal_cost = 23;
    }
  else
    {
      cout <<
    "Your meal input was not recognized, please make sure your input is right!";
      return 0;
    }

  //Determine Desert Cost
  if (desert == 'i' || desert == 'I' || desert == 'c' || desert == 'C')
    {
      desert_cost = 3;
    }
  else if (desert == 'p' || desert == 'P' || desert == 'f' || desert == 'F')
    {
      desert_cost = 5;
    }
  else
    {
      cout <<
    "Your desert input was not recognized, please make sure your input is right!";
      return 0;
    }

  //Calculate sales tax and subtotal
  int subtotal = meal_cost + desert_cost;
  
  float sales_tax = subtotal * 0.075, total = subtotal + sales_tax;
  
  cout << "Your subtotal is: " << subtotal << endl;
  
  printf("Sales Tax: %.2f \n", sales_tax);
  
  printf("Your total is: %.2f and this will go to member charge!", total);
    cout<<endl;
    
  cout<< "Thank you for dining with us at Discovery Bay Golf and Country Club! You made Matt Padilla happy! :)";
    cout<<endl;
  
  return 0;

}

