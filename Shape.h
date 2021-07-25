#ifndef SHAPE_H
#define SHAPE_H

//#pragma once
#include "Point.h"
#include "Canvas.h"
#include <string>

class Shape 
{
public:
	Shape(const std::string& type, const std::string& name);
	virtual ~Shape();

	virtual double getArea() const = 0;
	virtual double getPerimeter() const = 0;
	virtual void move(const Point& other) = 0;
	virtual void draw(const Canvas& canvas) = 0;
	virtual void clearDraw(const Canvas& canvas) =0;

	void printDetails() const;
	std::string getType() const;
	std::string getName() const;

private:
	std::string _type;
	std::string _name;
};
#endif