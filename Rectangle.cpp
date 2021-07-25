#include "Rectangle.h"
#include <stdexcept>


myShapes::Rectangle::Rectangle(const Point& a, double length, double width, const std::string& type, const std::string& name)
    : Polygon(type, name), _length(length), _width(width)
{
	// Meaning the points are making a line.
	if (width == 0 || length == 0)
	{
		//throw std::exception("Length or Width can't be 0.");
		std::logic_error e("Length or Width can't be 0.");
		throw std::exception(e);
	}
	_points.push_back(a);
	_points.push_back(Point(a.getX() + abs(length), a.getY() + abs(width)));
}

myShapes::Rectangle::~Rectangle()
{}

double myShapes::Rectangle::getLength() const
{
	return _length;
}

double myShapes::Rectangle::getWidth() const
{
	return _width;
}

double myShapes::Rectangle::getPerimeter() const
{
        return (2 * _length) + (2 *  _width);
}

double myShapes::Rectangle::getArea() const
{
        return _length * _width;
}
/*
double myShapes::Rectangle::getArea() const
{
	// Get the third point so calculating the distance will be duable.
	Point thirdPoint(_points[0].getX(), _points[1].getY());
	return abs(_points[0].distance(thirdPoint) * _points[1].distance(thirdPoint));
}
*/
void myShapes::Rectangle::draw(const Canvas& canvas)
{
	canvas.draw_rectangle(_points[0], _points[1]);
}

void myShapes::Rectangle::clearDraw(const Canvas& canvas)
{
	canvas.clear_rectangle(_points[0], _points[1]);
}


