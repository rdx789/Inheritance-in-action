#include "Shape.h"
#include <iostream>

Shape::Shape(const std::string & type, const std::string & name) : _type(type), _name(name)
{}

Shape::~Shape()
{}

void Shape::printDetails() const
{
	std::cout << "Type: " <<_type.c_str() << "\t" << "Name: " <<_name.c_str()\
	 << "\t" << "Area: " << const_cast<Shape*>(this)->getArea() << "\t" << "Perimeter: " \
	 << const_cast<Shape*>(this)->getPerimeter() << std::endl;
}


std::string Shape::getType() const
{ 
	return _type; 
}

std::string Shape::getName() const
{ 
	return _name; 
}