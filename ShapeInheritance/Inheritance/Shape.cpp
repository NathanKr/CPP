#include "Shape.h"



Shape::Shape()
{
}


Shape::~Shape()
{
}

void Shape::SetX(int x) {
	this->x = x;
}
void Shape::SetY(int y) {
	this->y = y;
}

int Shape::GetX() const{
	return x;
}

int Shape::GetY() const {
	return y;
}