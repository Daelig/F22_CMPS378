//
//  main.cpp
//  Quiz 1 Revision
//
//  Created by Darrick  on 11/1/23.
//

#include <iostream>
#include <iomanip>


using namespace std;
void displayHeader() {
    cout<< "-----------------------BMI Calculator--------------------------"<<endl;
    cout<< "|    Category                |         BMI Range (kg/m2)     | "<<endl;
    cout<< "|    Severe Thinesss         |         <16                   | "<<endl;
    cout<< "|    Modertate Thiness       |         16 - 17               | "<<endl;
    cout<< "|    Mild Thiness            |         17 - 18.5             | "<<endl;
    cout<< "|    Normal                  |         18.5 - 25             | "<<endl;
    cout<< "|    Overweight              |         25 - 30               | "<<endl;
    cout<< "|    Obese Class 1           |         30 - 35               | "<<endl;
    cout<< "|    Obese Class 2           |         35 - 40               | "<<endl;
    cout<< "|    Obese Class 3           |         <40                   | "<<endl;
    cout<< "---------------------------------------------------------------"<<endl;
}
int main(int argc, const char * argv[])
{
    displayHeader();
    
    string name = " ", gender = " ", bmiCat = " ";
    int age = 0, htft = 0, htin = 0, totalHeight = 0;
    double weight = 0, bmi = 0;
    
    cout<<"Please welcome to BMI Calculator!"<<endl;
    
    cout<<"Please enter your name: ";
    getline(cin,name);
    cout<<endl;
    
    cout<<"Please enter your age: ";
    cin>>age;
    cout<<endl;
    
    cout<<"Please enter your gender: ";
    cin.ignore();
    getline(cin,gender);
    cout<<endl;
    
    cout<<"Please enter your height in feet: ";
    cin>>htft;
    cout<<endl;
    
    cout<<"Please enter your height in inches: ";
    cin>>htin;
    cout<<endl;
    
    cout<<"Please enter your weight in pounds: ";
    cin>>weight;
    cout<<endl;
    
    cout<<fixed<<showpoint;
    totalHeight = (htft * 12) + htin;
    bmi = 703 * ( weight / (totalHeight * totalHeight));
    
    if (0 <= bmi && bmi < 16){
        bmiCat = "Severe Thinness";}
    else if (16 <= bmi && bmi < 17){
        bmiCat = "Moderate Thiness";}
    else if (17 <= bmi && bmi < 18.5){
        bmiCat = "Mild Thinness";}
    else if (18.5 <= bmi && bmi < 25){
        bmiCat = "Normal";}
    else if (25 <= bmi && bmi < 30){
        bmiCat = "Overweight";}
    else if (30 <= bmi && bmi < 35){
        bmiCat = "Obese Class 1";}
    else if (35 <= bmi && bmi < 40){
        bmiCat = "Obese Class 2";}
    else if (40 <= bmi ){
        bmiCat= "Obese Class 3";}
    else {
        cout<<"Your inputs, were not recognized, please try again";
        return 0;
    }
    
    cout<<setprecision(1);
    cout<<"Hi "<<name<<", "<<"you are a "<<gender<<". "<<"You are "<<age<<" years old. "<<"You are currently "<<htft<<"''"<<htin<<", and you currently weigh "<<weight<<" pounds. "<<"Your BMI is "<<bmi<<", "<<"which is "<<bmiCat<<"."<<endl;
    cout.unsetf(ios::fixed);
    
    return 0;
}
