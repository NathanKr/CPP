#include "Reactangle.h"



Reactangle::Reactangle()
{
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