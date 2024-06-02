//
//  main.cpp
//  Assignment 2 Part 3 (367)
//
//  Created by Darrick  on 6/2/24.
//

#include <iostream>
#include <iomanip>

using namespace std;

struct Person {
    string name;
    string gender;
    string bmiCat;
    int age;
    int htft;
    int htin;
    int totalHeight;
    double weight;
    double bmi;
};

void displayHeader() {
    cout << "-------------------------BMI Calculator-------------------------" << endl;
    cout << "|       Category               |       BMI Range (kg/m2)       |" << endl;
    cout << "|       Severe Thinness        |         <16                   |" << endl;
    cout << "|       Moderate Thiness       |         16 - 17               |" << endl;
    cout << "|       Mild Thinness          |         17 - 18.5             |" << endl;
    cout << "|       Normal                 |         18.5 - 25             |" << endl;
    cout << "|       Overweight             |         25 - 30               |" << endl;
    cout << "|       Obese Class 1          |         30 - 35               |" << endl;
    cout << "|       Obese Class 2          |         35 - 40               |" << endl;
    cout << "|       Obese Class 3          |         <40                   |" << endl;
    cout << "----------------------------------------------------------------" << endl;
}

int main(int argc, const char * argv[])
{
    displayHeader();
    
    Person person;
    
    cout<<"Please welcome to BMI Calculator!"<<endl;
    
    cout<<"Please enter your name: ";
    getline(cin, person.name);
    cout<<endl;
    
    cout<<"Please enter your age: ";
    cin>>person.age;
    cout<<endl;
    
    cout<<"Please enter your Gender: ";
    cin.ignore();
    getline(cin, person.gender);
    cout<<endl;
    
    cout<<"Please enter your height in feet: ";
    cin>>person.htft;
    cout<<endl;
    
    cout<<"Please enter your height in inches: ";
    cin>>person.htin;
    cout<<endl;
    
    cout<<"Please enter your weight in pounds: ";
    cin>>person.weight;
    cout<<endl;
    
    cout << fixed<< showpoint;
    person.totalHeight = (person.htft * 12) + person.htin;
    person.bmi = 703 * ( person.weight / (person.totalHeight * person.totalHeight));

    if (0 <= person.bmi && person.bmi < 16){
        person.bmiCat = "Severe Thinness";}
    else if (16 <= person.bmi && person.bmi < 17){
        person.bmiCat = "Moderate Thinness";}
    else if (17 <= person.bmi && person.bmi < 18.5){
        person.bmiCat = "Mild Thinness";}
    else if (18.5 <= person.bmi && person.bmi < 25){
        person.bmiCat = "Normal";}
    else if (25 <= person.bmi && person.bmi < 30){
        person.bmiCat = "Overweight";}
    else if (30 <= person.bmi && person.bmi < 35){
        person.bmiCat = "Obese Class 1";}
    else if (35 <= person.bmi && person.bmi < 40){
        person.bmiCat = "Obese Class 2";}
    else if (40 <= person.bmi ){
        person.bmiCat = "Obese Class 3";}
    else {
        cout<<"Your inputs were not recognized, please try again";
        return 0;
    }

    cout<<setprecision(1);
    cout<<"Hi "<<person.name<<", "<<"you are a "<<person.gender<<". "<<"You are "<<person.age<<" years old. "<<"You are currently "<<person.htft<<"'"<<person.htin<<", and you currently weigh "<<person.weight<<" pounds. "<<"Your BMI is "<<person.bmi<<", "<<"which is "<<person.bmiCat<<"."<<endl;
    cout.unsetf(ios::fixed);

    
    return 0;
}
