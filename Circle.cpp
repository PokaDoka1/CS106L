#include "Circle.h"

Circle::Circle() : radius(0.0) {}  
Circle::Circle(double r) : radius(r) {}

double Circle::area() const {
    return 3.14159 * radius * radius;
}

double Circle::perimeter() const {
    return 2 * 3.14159 * radius;
}
