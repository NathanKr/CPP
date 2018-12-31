#pragma once
class Shape
{
public:
	Shape();
	~Shape();

	virtual float GetArea() const = 0 ;

	void SetX(int x);
	void SetY(int y);

	int GetX() const;
	int GetY() const;


protected:
	int x, y;
};

