#pragma once
class Shape
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

