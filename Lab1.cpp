// Lab1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "cmath"
using namespace std;

int main()
{
	int x, y, z, a, b, c, d;
	char answer;
	bool run = true;
	while (run)
	{
		cout << "Please enter the first time " << endl;
		cin >> x;
		cout << "Please enter the second time " << endl;
		cin >> y;
		z = x - y;
		a = 100;
		b = fabs(z);
		c = b / a;
		d = b % a;
		cout << "The difference is " << c << " hours " << d << " minutes " << endl;
		cout << "Would you like to repeat? Y/N" << endl;
		cin >> answer;
		if (answer == 'N') {
			run = false;
		}
	}
}