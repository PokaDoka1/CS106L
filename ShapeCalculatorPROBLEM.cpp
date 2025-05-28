 // THIS IS WHAT THE STUDENTS ARE GIVEN
// THIS WOULD ACTUALLY BE ShapeCalculator.cpp but I renamed it to PROBLEM because this is the file I would give the students :D
 #pragma once
#include <iostream>

/** ShapeCalculator Constructor
 * Sets the _size to 0, _capacity to 0, and initalizes
 * an array called _shapes of size _capacity
 */
template <typename T>
ShapeCalculator<T>::ShapeCalculator() {
    // TO DO
}

/** ShapeCalculator Destructor
 * Deletes the array _shapes
 */
// Something is wrong with this function. What's wrong? Fix it! I don't see any errors??
ShapeCalculator::~ShapeCalculator() {
    delete[] _shapes;
}

/** addShape() method
 * This method takes in a shape and adds it to the array of _shapes
 */
template <typename T>
void ShapeCalculator<T>::addShape(const T& shape) {
    // TO DO
}

/** getArea() method
 * This method returns the area of the shape at a given index
 * If the given index is greater than the number of elements in the array,
 * print "Invalid shape index!"
 */

  // TO DO
}

/** getPerimeter() method
 * This method returns the perimeter of the shape at a given index
 * If the given index is greater than the number of elements in the array,
 * print "Invalid shape index!"
 */
   // TO DO

/** totalArea() method
 * This method returns the total area across all the shapes in the _shapes array
 */
    // TO DO

/** totalPerimeter() method
 * This method returns the total permiter across all the shapes in the _shapes array
 */
    // TO DO

/** size() method
 * This method returns the number of elements added to the ShapeCalculator
 */
template <typename T>
size_t ShapeCalculator<T>::size() const {
    return _size;
}

/** empty() method
 * This method sets the number of elements added to 0
 */
template <typename T>
bool ShapeCalculator<T>::empty() const {
    return _size == 0;
}
