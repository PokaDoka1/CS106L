#pragma once
#include <iostream>

template <typename T>
ShapeCalculator<T>::ShapeCalculator() {
    _size = 0;
    _capacity = 0;
    _shapes = new T[_capacity];
}

template <typename T>
ShapeCalculator<T>::~ShapeCalculator() {
    delete[] _shapes;
}

template <typename T>
void ShapeCalculator<T>::addShape(const T& shape) {
    _shapes[_size++] = shape;
}

template <typename T>
double ShapeCalculator<T>::getArea(size_t index) const {
    if (index >= _size) {
        std::cout << "Invalid shape index!";
    }
    return _shapes[index].area();
}

template <typename T>
double ShapeCalculator<T>::getPerimeter(size_t index) const {
    if (index >= _size) {
        std::cout << "Invalid shape index!";
    }
    return _shapes[index].perimeter();
}

template <typename T>
double ShapeCalculator<T>::totalArea() const {
    double total = 0;
    for (size_t i = 0; i < _size; ++i) {
        total += _shapes[i].area();
    }
    return total;
}

template <typename T>
double ShapeCalculator<T>::totalPerimeter() const {
    double total = 0;
    for (size_t i = 0; i < _size; ++i) {
        total += _shapes[i].perimeter();
    }
    return total;
}

template <typename T>
size_t ShapeCalculator<T>::size() const {
    return _size;
}

template <typename T>
bool ShapeCalculator<T>::empty() const {
    return _size == 0;
}

