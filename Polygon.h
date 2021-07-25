#ifndef POLYGON_H
#define POLYGON_H
//#pragma once

#include "Shape.h"
#include "Point.h"
#include <vector>

class Polygon : public Shape
{
public:
	Polygon(const std::string& type, const std::string& name);
	virtual ~Polygon();

	virtual void move(const Point& other);
	virtual double getPerimeter() const;

protected:
	std::vector<Point> _points;
};
#endif