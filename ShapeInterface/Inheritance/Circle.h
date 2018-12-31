#pragma once
#include "Shape.h"

class Circle : public Shape
{
public:
	Circle();
	Circle(int radius, int x, int y);
	~Circle();
	void SetRadius(int radius);
	int GetRadius() const;
	float GetArea() const;

private:
	int radius;
};

