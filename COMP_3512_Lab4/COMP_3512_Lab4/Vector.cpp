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

double Vector::get_X()
{
	return x;
}

double Vector::get_Y()
{
	return y;
}

double Vector::get_Z()
{
	return z;
}

void Vector::set_X(Vector &vect)
{
	vect.x = x;
}

void Vector::set_Y(Vector &vect)
{
	vect.y = y;
}

void Vector::set_Z(Vector &vect)
{
	vect.z = z;
}

void Vector::clear()
{
	x = 0;
	y = 0;
	z = 0;
}

inline ostream & operator<<(ostream & os, const Vector& vect)
{

	os << "X = " << vect.x << endl
		<< "Y = " << vect.y << endl
		<< "Z = " << vect.z << endl
		 << endl;
	
	return os;
}

Vector & Vector::operator++()
{
	x++;
	y++;
	z++;
	return *this;
}

Vector & Vector::operator++(int)
{
	Vector temp(*this);
	operator++();
	return temp;
}

Vector & Vector::operator--()
{
	x--;
	y--;
	z--;
	return *this;
}

Vector & Vector::operator--(int)
{
	Vector temp(*this);
	operator--();
	return temp;
}


