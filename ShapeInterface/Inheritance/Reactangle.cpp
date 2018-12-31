#include "Reactangle.h"



Reactangle::Reactangle()
{
}

Reactangle::Reactangle(int width, int height, int x, int y)
{
	this->x = x;
	this->y = y;
	this->width = width;
	this->height = height;
}

float Reactangle::GetArea() const {
	return (float)width * height;
}

Reactangle::~Reactangle()
{
}

void Reactangle::SetWidth(int width) {
	this->width = width;
}

void Reactangle::SetHeight(int height) {
	this->height = height;
}

int Reactangle::GetWidth() const {
	return width;
}
int Reactangle::GetHeight() const {
	return height;
}