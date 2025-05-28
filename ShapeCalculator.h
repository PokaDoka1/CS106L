#include <cstddef>
#include <iostream>

template <typename T>
class ShapeCalculator {
public:
    // CONSTRUCTOR
    ShapeCalculator();

    // DESTRUCTOR
    ~ShapeCalculator();

    void addShape(const T& shape);

    double getArea(size_t index) const;
    double getPerimeter(size_t index) const;

    double totalArea() const;
    double totalPerimeter() const;

    size_t size() const;
    bool empty() const;

private:
    size_t _size;
    size_t _capacity;
    T* _shapes;
};

#include "ShapeCalculator.cpp"
