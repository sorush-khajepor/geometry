// public header in include directory is referenced from top level
#include <geometry/shape/shape.h>
#include<iostream>

std::string Shape::GetName() {
	return "shape";
}

void PrintShape(Shape& shape) {
	std::cout << shape.GetName();
};