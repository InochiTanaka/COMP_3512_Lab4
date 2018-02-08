#pragma once
#include <iostream>

using namespace std;

	class Vector
	{
		double x;
		double y;
		double z;

		public:
			Vector();
			~Vector();
			void three_parameter(double x, double y, double z);
			Vector(const Vector &vect);
			double get_X();
			double get_Y();
			double get_Z();
			void set_X(int x);
			void set_Y(int y);
			void set_Z(int z);
			void clear();
			Vector & operator++();
			Vector operator++(int);
			Vector & operator--();
			Vector operator--(int);
			Vector & operator=(Vector rhs);
			friend void swap(Vector & lhs, Vector & rhs);
			friend ostream& operator<<(ostream& os, const Vector& vect);
			Vector & operator+=(const Vector & rhs);
			Vector & operator-=(const Vector & rhs);
			friend Vector operator+(Vector lhs, const Vector & rhs);
			friend Vector operator-(Vector lhs, const Vector & rhs);
			friend double operator*(Vector lhs, const Vector & rhs);
			Vector operator*(double d);


	};
