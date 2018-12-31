#pragma once
#include "Shape.h"

class Circle : public Shape
{
public:
	Circle();
	~Circle();
	void SetRadius(int radius);
	int GetRadius() const;

private:
	int radius;
};

