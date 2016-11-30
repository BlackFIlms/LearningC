/*
This file it explains loops and conditions in C++ language.
*/

#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

int main(void)
{
	for (int i = 1; i < 10; i++)								// This for loop.
	{															// for loops work a certain number of times.
		cout << "Hi there!" << endl; /*body of the loop*/		//
	}															//

	int y = 1;

	while (y == 1)
	{
		cout << "y == 1" << endl;
		cout << "enter new value for Y:" << endl;
		cin >> y;
		if (y != 1)
		{
			cout << "Y != 1" << endl;
		}
	}

	cout << "y = ";
	cout << y << endl;

	do
	{
		if (y != 1)
		{
			cout << "Y != 1" << endl;
		}
		if (y == 1)
		{
			cout << "Y == 1" << endl;
		}
		cout << "enter new value for Y:" << endl;
		cin >> y;
	} while (y == 1);

	_getch();
}