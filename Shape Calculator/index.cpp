#include<bits/stdc++.h>
#include<cmath>
using namespace std;

class Shape {
    public:
        virtual double area() = 0;
        virtual double perimeter() = 0;
        virtual void display() = 0;
        virtual ~Shape () = default;

};

class Circle : public Shape {
    private:
        double radius;
    
    public:
        Circle(double r) : radius(r) {};
        double area() override {
            return M_PI * radius * radius ;
        }
        double perimeter() override {
            return 2 * M_PI * radius;
        }
        void display() override {
            cout << "Circle, Radius: " << radius << "Area: " << area() << endl;
            cout << "Circle, Perimeter is: " << perimeter() << endl;
        }
};

class Rectangle : public Shape {
    private: 
        double length, width;
    
    public:
        Rectangle (double l, double h) : length(l), width(h) {};
        double area() override {
            return length * width;
        }
        double perimeter() override {
            return 2 * (length + width);
        }
        void display() override {
            cout << "Rectangle, area : " << area() << endl; 
            cout << "Rectangle Perimeter is :  " << perimeter() << endl;
        }
};



class Triangle : public Shape {
    private:
        double base, height;
    
    public:
        Triangle(double b, double h) : base(b), height(h) {};

        double area() override {
            return 0.5 * base * height;
        }
        double perimeter() override {
            return base + height;
        }
        void display() override {
            cout << "Triangle, Area: " << area() << endl;
            cout << "Triangle perimeter is: " << perimeter() << endl;
        }
};

int main() {
    Shape* shapes[] = {
        new Circle(8.0),
        new Rectangle(10.0, 8.0), 
        new Triangle(10.0, 5.0),
    };
    for (int i = 0; i < 3; i++) {
        shapes[i] -> display();
        delete shapes[i];
    }
    return 0;
}