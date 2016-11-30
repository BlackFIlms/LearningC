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
		cout << "Hi there!" << endl;	/*body of the loop*/	//
	}															//

	cout << ">>>>>>>> End of for loop! <<<<<<<<" << endl;	// Marking for console

	int y = 1;

	while (y == 1)									// While loop, this loop working, as the condition in brackets is true!
	{												//
		cout << "y == 1" << endl;					// if y == 1 loop started and print in console this text
		cout << "enter new value for Y:" << endl;	// Request from user new value for Y
		cin >> y;									// Request from user new value for Y
		if (y != 1)									//
		{											// check and print to console: y == 1 or no
			cout << "Y != 1" << endl;				//
		}											//
	}

	cout << "y == ";								// if while loop end working, print new Y value
	cout << y << endl;								// if while loop end working, print new Y value

	cout << ">>>>>>>> End of while loop! <<<<<<<<" << endl;	// Marking for console

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
		if (y != 1)
		{
			cout << "Y == ";
			cout << y << endl;
			cout << "This is finish for: do-while!" << endl;
		}
	} while (y == 1);

	_getch();
}