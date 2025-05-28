#pragma once

class Circle {
public:
    Circle();              
    Circle(double r);

    double area() const;
    double perimeter() const;

private:
    double radius;
};
