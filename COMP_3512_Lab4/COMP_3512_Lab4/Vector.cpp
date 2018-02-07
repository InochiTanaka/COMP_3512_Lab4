#include "Vector.hpp"

Vector::Vector() : x{ 0 }, y{ 0 }, z{ 0 }
{
}

Vector::~Vector()
{
}

void Vector::three_parameter(double x, double y, double z)
{
	mX = x;
	mY = y;
	mZ = z;
}
