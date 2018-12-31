#include "Circle.h"



Circle::Circle()
{
}

Circle::Circle(int radius, int x, int y)
{
	this->x = x;
	this->y = y;
	this->radius = radius;
}

Circle::~Circle()
{
}

float Circle::GetArea() const {
	return (float)(3.14*radius*radius);
}

void Circle::SetRadius(int radius) {
	this->radius = radius;
}

int Circle::GetRadius() const
{
	return radius;
}