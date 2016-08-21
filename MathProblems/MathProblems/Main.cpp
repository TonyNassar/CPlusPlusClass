#include <iostream>
using namespace std;

void Derive(double x, double y);
void Integral(double x, double y);


int main()
{
	//derive 3x^2
	cout << "derive 3x^2\n" << endl;
	Derive(3, 2);
	//derive 3x
	cout << "derive 3x\n" << endl;
	Derive(3, 1);
	//derive 3
	cout << "derive 3\n" << endl;
	Derive(3, 0);

	//Integrate 3x^-.5
	cout << "Integrate 3x^-.5\n" << endl;
	Integral(3, -.5);
	//Integrate 3x^-1
	cout << "Integrate 3x^-1\n" << endl;
	Integral(3, -1);

	cin.get();
	return 0;
}

void Derive(double x, double y)
{
	if (x > 0 && y > 0)
	{
		double z = y;
		y = y - 1;
		x = x*z;
		if (y != 0)
		{
			cout << x << "x^" << y << endl;
		}
		else
		{
			cout << x << endl;
		}
	}
	else if(x == 0)
	{
		cout << "You must have a constant that is not 0 in front of the variable." << endl;
	}
	else if (y == 0)
	{
		x = 0;
		cout << x << endl;
	}
}

void Integral(double x, double y)
{
	if (x != 0 && y != -1)
	{
		y = y + 1;
		x = x / y;

		cout << x << "x^" << y <<" + C" << endl;
	}
	else if (y == -1)
	{
		cout << "ln(" << x << "x) + C" << endl;
	}
}