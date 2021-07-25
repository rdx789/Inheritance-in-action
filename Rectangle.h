#ifndef RECTANGLE_H
#define RECTANGLE_H
//#pragma once

#include "Polygon.h"
#include "Canvas.h"

namespace myShapes
{
	// Calling it MyRectangle becuase Rectangle is taken by global namespace.
	class Rectangle : public Polygon
	{
	public:
		// There's a need only for the top left corner 
		Rectangle(const Point& a, double length, double width, const std::string& type, const std::string& name);
		~Rectangle();
        
		double getPerimeter() const;
		double getArea() const;
		void draw(const Canvas& canvas);
		void clearDraw(const Canvas& canvas);
		double getLength() const;
		double getWidth() const;

	private:
	        double _length;
		double _width;
	};
}
#endif
