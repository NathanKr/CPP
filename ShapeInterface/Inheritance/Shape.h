#pragma once
#include "IShape.h"

class Shape : public IShape
{
public:
	Shape();
	~Shape();


	void SetX(int x);
	void SetY(int y);

	int GetX() const;
	int GetY() const;


protected:
	int x, y;
};

