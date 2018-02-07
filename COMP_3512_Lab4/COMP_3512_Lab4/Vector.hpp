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
			void three_parameter();
			Vector(const Vector &vect);
			double get_X();
			double get_Y();
			double get_Z();
			void set_X(Vector &vect);
			void set_Y(Vector &vect);
			void set_Z(Vector &vect);
			void clear();
			friend ostream& operator<<(ostream& os, const Vector& vect);


	};
