#ifndef CIRCLE_H
#define CIRCLE_H
//#pragma once

#include "Shape.h"
#include "Point.h"
#include "Canvas.h"

#define PI 3.14

class Circle : public Shape
{
public:
	Circle(const Point& center, double radius, const std::string& type, const std::string& name);
	~Circle();

    const Point& getCenter() const;
    double getRadius() const;
	double getArea() const;
	double getPerimeter() const;
	void move(const Point& other);
	void draw(const Canvas& canvas);
	void clearDraw(const Canvas& canvas);

private:
	Point _center;
	double _radius;
};
#endif