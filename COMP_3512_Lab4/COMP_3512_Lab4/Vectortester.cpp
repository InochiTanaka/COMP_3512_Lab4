#include "Vector.hpp"
#include <iostream>

int main()
{
	using std::cout;
	using std::endl;

	Vector a;
	cout << "Vector A constructed with default constructor\n";
	cout << a << endl;

	cout << "Setting values for three parameters X = 0, Y = 1, and Z = 2 to Vector A\n";
	a.three_parameter(0, 1, 2);
	cout << a << endl;

	cout << "Set and Vector of three parameters on Vector B\n";
	Vector b;
	cout << "Set X = 2\n";
	b.set_X(2);
	cout << "Get X : " << b.get_X() << endl;
	cout << "\n";

	cout << "Set Y = 1\n";
	b.set_Y(1);
	cout << "Get Y : " << b.get_Y() << endl;
	cout << "\n";

	cout << "Set Z = 0\n";
	b.set_Z(0);
	cout << "Get Z : " << b.get_Z() << endl;
	cout << "\n";

	cout << b << endl;

	cout << "Vector C constructed using copy constructor from B\n";
	Vector c(b);
	cout << c << endl;

	cout << "Clearing Matrix C\n";
	c.clear();
	cout << c << endl;
	cout << "Vector B should not be cleared\n";
	cout << b << endl;

	cout << "Vector E constructed using copy constructor from B\n";
	Vector e(b);
	cout << e << endl;

	cout << "Vector ++E\n";
	++e;
	cout << e << endl;

	cout << "Vector E++\n";
	e++;
	cout << e << endl;

	cout << "Vector --E\n";
	--e;
	cout << e << endl;

	cout << "Vector E--\n";
	e--;
	cout << e << endl;

	cout << "Swap Vector A and Vector B\n";
	a = b;
	cout << "Vector A\n";
	cout << a << endl;
	cout << "Vector B\n";
	cout << b << endl;

	cout << "Vector F constructed using copy constructor from E\n";
	Vector f(e);
	cout << e << endl;

	cout << "Vector F += Vector E\n";
	f += e;
	cout << f << endl;

	cout << "Vector F -= Vector E\n";
	f -= e;
	cout << f << endl;

	cout << "Vector G = Vector A + Vector B\n";
	Vector g = a + b;
	cout << g << endl;

	cout << "Vector G = Vector A - Vector B\n";
	g = a - b;
	cout << g << endl;

	cout << "1st ver of operator*: Dot product of Vector A and Vector B\n";
	cout << a 
		<< endl;
	cout << b 
		<< endl;

	double dotProduct = a * b;
	cout << "Dot Product is "
		<< dotProduct 
		<< endl
		<< endl;

	cout << "2nd ver of operator*: Multiplies each element in the Vector by the double value on Vector A\nMultiplies = 2\n";
	Vector h = a * 2;
	cout << h << endl;

	//std::cin.get();
	std::cin.get();

	return 0;
}
