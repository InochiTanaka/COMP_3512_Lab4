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

		private:
			double mX;
			double mY;
			double mZ;


	};
