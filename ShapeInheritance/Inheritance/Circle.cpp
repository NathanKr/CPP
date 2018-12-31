#include "Circle.h"



Circle::Circle()
{
}


Circle::~Circle()
{
}

void Circle::SetRadius(int radius) {
	this->radius = radius;
}

int Circle::GetRadius() const
{
	return radius;
}