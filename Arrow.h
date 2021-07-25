#ifndef ARROW_H
#define ARROW_H
//#pragma once

#include "Polygon.h"
#include "Canvas.h"

class Arrow: public Polygon
{
public:
	Arrow(const Point& a, const Point& b, const std::string& type, const std::string& name);
	~Arrow();

	void move(const Point & other);
	double getArea() const;
	double getPerimeter() const;
	void draw(const Canvas& canvas);
	void clearDraw(const Canvas& canvas);
/*
private:
	std::vector<Point> _points;
*/
};
#endif
