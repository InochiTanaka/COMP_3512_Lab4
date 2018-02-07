#include "Vector.hpp"

Vector::Vector() : x{ 0 }, y{ 0 }, z{ 0 }
{
}

Vector::~Vector()
{
}

void Vector::three_parameter()
{
	cout << "Input X:" << endl;
	cin >> x;
	cout << "Input Y:" << endl;
	cin >> y;
	cout << "Input Z:" << endl;
	cin >> z;
}

Vector::Vector(const Vector & vect)
{
	x = vect.x;
	y = vect.y;
}
