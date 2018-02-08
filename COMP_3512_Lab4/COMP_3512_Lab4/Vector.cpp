#include "Vector.hpp"

//Default constructor
Vector::Vector() : x{ 0 }, y{ 0 }, z{ 0 }
{
}

//Destructor
Vector::~Vector()
{
}

//Constructor
Vector::Vector(const Vector & vect)
{
	x = vect.x;
	y = vect.y;
	z = vect.z;
}

//Set three parameters through asign
void Vector::three_parameter(double mX, double mY, double mZ)
{
	x = mX;
	y = mY;
	z = mZ;
}

//Return value of x
double Vector::get_X()
{
	return x;
}

//Return value of y
double Vector::get_Y()
{
	return y;
}

//Return value of z
double Vector::get_Z()
{
	return z;
}

//Set value of x by assign value
void Vector::set_X(int mX)
{
	x = mX;
}

//Set value of y by assign value
void Vector::set_Y(int mY)
{
	y = mY;
}

//Set value of z by assign value
void Vector::set_Z(int mZ)
{
	z = mZ;
}

//Clearing value of x, y, and z to 0
void Vector::clear()
{
	x = 0;
	y = 0;
	z = 0;
}

//Output each vakue of x, y, and z
ostream & operator<<(ostream & os, const Vector& vect)
{

	os << "X = " << vect.x << endl
		<< "Y = " << vect.y << endl
		<< "Z = " << vect.z << endl
		 << endl;
	
	return os;
}

//Prefix Increment
Vector & Vector::operator++()
{
	x++;
	y++;
	z++;
	return *this;
}

//Postfix Increment
Vector Vector::operator++(int)
{
	Vector temp(*this);
	operator++();
	return temp;
}

//Prefix decrement
Vector & Vector::operator--()
{
	x--;
	y--;
	z--;
	return *this;
}

//Postfix decrement
Vector Vector::operator--(int)
{
	Vector temp(*this);
	operator--();
	return temp;
}

//Swap two Victors
Vector & Vector::operator=(Vector rhs)
{
	swap(*this, rhs);
	return *this;
}

void swap(Vector & lhs, Vector & rhs)
{
	using std::swap;
	swap(lhs.x, rhs.x);
	swap(lhs.y, rhs.y);
	swap(lhs.z, rhs.z);
}

//Add each value of x, y, and z with another Vector
Vector & Vector::operator+=(const Vector & vect)
{
	x += vect.x;
	y += vect.y;
	z += vect.z;
	return *this;
}

//reduce each value of x, y, and z by another Vector
Vector & Vector::operator-=(const Vector & vect)
{
	x -= vect.x;
	y -= vect.y;
	z -= vect.z;
	return *this;
}

//Add two vectors
Vector operator+(Vector lhs, const Vector & rhs)
{
	lhs += rhs;
	return lhs;
}

//Reduce a vector from another one
Vector operator-(Vector lhs, const Vector & rhs)
{
	lhs -= rhs;
	return lhs;
}

//Calculate dot product
double operator*(Vector lhs, const Vector & rhs)
{
	return (lhs.x*rhs.x)+ (lhs.y*rhs.y) + (lhs.z*rhs.z);
}

//multiply each value of x, y, and z with another Vector
Vector Vector::operator*(double d)
{
	x *= d;
	y *= d;
	z *= d;

	return *this;
}