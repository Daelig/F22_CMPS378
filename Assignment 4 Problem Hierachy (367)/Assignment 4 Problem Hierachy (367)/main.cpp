//
//  main.cpp
//  Assignment 4 Problem Hierachy (367)
//
//  Created by Darrick  on 6/2/24.
//

#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

const double PI = 3.14159;

class Shape {
protected:
    double width;
    double height;
public:
    Shape(double w, double h) : width(w), height(h) {}
    virtual double area() = 0;
    virtual double perimeter() = 0;
    virtual void display() {
        cout << "Shape: ";
    }
};

class Rectangle : public Shape {
public:
    Rectangle(double w, double h) : Shape(w, h) {}
    double area() override {
        return width * height;
    }
    double perimeter() override {
        return 2 * (width + height);
    }
    void display() override {
        Shape::display();
        cout << "Rectangle" << endl;
    }
};

class Triangle : public Shape {
public:
    Triangle(double w, double h) : Shape(w, h) {}
    double area() override {
        return 0.5 * width * height;
    }
    double perimeter() override {
        return width + height + sqrt(width * width + height * height);
    }
    void display() override {
        Shape::display();
        cout << "Triangle" << endl;
    }
};

class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : Shape(0, 0), radius(r) {}
    double area() override {
        return PI * radius * radius;
    }
    double perimeter() override {
        return 2 * PI * radius;
    }
    void display() override {
        Shape::display();
        cout << "Circle" << endl;
    }
};

class Square : public Shape {
private:
    double side;
public:
    Square(double s) : Shape(s, s), side(s) {}
    double area() override {
        return side * side;
    }
    double perimeter() override {
        return 4 * side;
    }
    void display() override {
        Shape::display();
        cout << "Square" << endl;
    }
};

int main() {
    int choice;
    double width, height, radius, side;
    char continueChoice;

    do {
        cout << "Choose a shape to calculate the area and perimeter:\n";
        cout << "1. Rectangle\n";
        cout << "2. Triangle\n";
        cout << "3. Circle\n";
        cout << "4. Square\n";
        cout << "Enter your choice (1-4): ";

    
        while (!(cin >> choice)) {
            cout << "Invalid input. Please enter an integer: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        switch (choice) {
            case 1: {
                cout << "Enter the width of the rectangle: ";
                while (!(cin >> width)) {
                    cout << "Invalid input. Please enter a number: ";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
                cout << "Enter the height of the rectangle: ";
                while (!(cin >> height)) {
                    cout << "Invalid input. Please enter a number: ";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
                Rectangle rectangle(width, height);
                rectangle.display();
                cout << "Area: " << rectangle.area() << endl;
                cout << "Perimeter: " << rectangle.perimeter() << endl;
                break;
            }
            case 2: {
                cout << "Enter the base of the triangle: ";
                while (!(cin >> width)) {
                    cout << "Invalid input. Please enter a number: ";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
                cout << "Enter the height of the triangle: ";
                while (!(cin >> height)) {
                    cout << "Invalid input. Please enter a number: ";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
                Triangle triangle(width, height);
                triangle.display();
                cout << "Area: " << triangle.area() << endl;
                cout << "Perimeter: " << triangle.perimeter() << endl;
                break;
            }
            case 3: {
                cout << "Enter the radius of the circle: ";
                while (!(cin >> radius)) {
                    cout << "Invalid input. Please enter a number: ";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
                Circle circle(radius);
                circle.display();
                cout << "Area: " << circle.area() << endl;
                cout << "Perimeter: " << circle.perimeter() << endl;
                break;
            }
            case 4: {
                cout << "Enter the side length of the square: ";
                while (!(cin >> side)) {
                    cout << "Invalid input. Please enter a number: ";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
                Square square(side);
                square.display();
                cout << "Area: " << square.area() << endl;
                cout << "Perimeter: " << square.perimeter() << endl;
                break;
            }
            default: {
                cout << "Invalid choice!" << endl;
                break;
            }
        }

        cout << "Do you want to continue? (y/n): ";
        cin >> continueChoice;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } while (continueChoice == 'y' || continueChoice == 'Y' || continueChoice == 'n' || continueChoice == 'N');

    return 0;
}
