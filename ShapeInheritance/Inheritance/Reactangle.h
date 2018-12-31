#pragma once
#include "Shape.h"
class Reactangle : public Shape
{
public:
	Reactangle();
	~Reactangle();
	void SetWidth(int width);
	void SetHeight(int height);

	int GetWidth() const;
	int GetHeight() const;
private:
	int width, height;
};

