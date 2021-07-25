#ifndef TRIANGLE_H
#define TRIANGLE_H
//#pragma once

#include "Polygon.h"
#include "Canvas.h"
#include <string>

class Triangle : public Polygon
{
public:
	Triangle(const Point& a, const Point& b, const Point& c, const std::string& type, const std::string& name);
        ~Triangle();

	double getArea() const;
	void draw(const Canvas& canvas);
	void clearDraw(const Canvas& canvas);
};
#endif
