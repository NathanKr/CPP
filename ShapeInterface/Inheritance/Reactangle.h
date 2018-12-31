#pragma once
#include "Shape.h"
class Reactangle : public Shape
{
public:
	Reactangle();
	Reactangle(int width ,int height , int x , int y);
	~Reactangle();
	void SetWidth(int width);
	void SetHeight(int height);
	float GetArea() const;

	int GetWidth() const;
	int GetHeight() const;
private:
	int width, height;
};

