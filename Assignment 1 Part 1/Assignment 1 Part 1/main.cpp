//
//  main.cpp
//  Gas Station
//
//  Created by Darrick  on 10/21/23.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
    //Implementation of header for Assignment 1 Part 1
    
    cout<<"-------------------Welcome to Gas 4 Taxes--------------------"<<endl;
    cout<<"|       Gas Type                 |              Price       |"<<endl;
    cout<<"-------------------------------------------------------------"<<endl;
    cout<<"|       Regular             (UR) |              $5.02       |"<<endl;
    cout<<"-------------------------------------------------------------"<<endl;
    cout<<"|       Midgrade            (UM) |              $5.22       |"<<endl;
    cout<<"-------------------------------------------------------------"<<endl;
    cout<<"|       Premium             (UP) |              $5.42       |"<<endl;
    cout<<"-------------------------------------------------------------"<<endl;
    cout<<"|       Diesel              (DL) |              $6.03       |"<<endl;
    cout<<"-------------------------------------------------------------"<<endl;
    
    //Declare and initialize variables
    float UR=5.02, UM=5.22, UP=5.42, DL=6.03;
    string gastype="";
    double gallons=0;
    double salestax=0.095;
    double total;
    string PM;
    
    //Ask the user
    cout<<"Choose a gas type: ";
    cin>>gastype;
    cout<<endl;
    cout<<"How many gallons: ";
    cin>>gallons;
    cout<<endl;
  
    if(gastype=="UR"||gastype=="ur"||gastype=="Ur"||gastype=="uR");
    else if(gastype=="UM"||gastype=="um"||gastype=="Um"||gastype=="uM");
    else if(gastype=="UP"||gastype=="up"||gastype=="Up"||gastype=="uP");
    else if(gastype=="DL"||gastype=="dl"||gastype=="Dl"||gastype=="dL");
    else {
    cout <<"Your gas input was not recognized, please make sure that your input is right!" << endl;
        return 1;
    }
    total=UR*gallons;
    total=UM*gallons;
    total=UP*gallons;
    total=DL*gallons;
    
    // Calculate
    salestax=total*0.095;
    total= total + salestax;
   
    cout<<"How would you like to pay for it? (Debit Card, Credit Card, Gift Card or Cash) ";
    cin.ignore();
    getline(cin, PM);cout<<"\n";
    cout<<endl;
    cout<<"Great! You have paid the balance of $"<<total<<" using your "<< PM << ".\n "<<endl;
    cout<<"Thank you for filling up gas at Gas 4 Taxes, a place to get broke!"<<endl;
   
    return 0;
    }

