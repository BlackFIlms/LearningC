/*
Task:
1. User enter the time required for taking a shower.
2. Check user data on the positive number.
3. Calculate and output, how much will needed bottles with water.
*/

#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;

int x;

int posNum ()																				//	Check var x.
{
	if (x > 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main(void)
{
	x = 0;

	while (posNum() == 0)																	//	Loop end, when user enter a positive number.
	{
		cout << "Enter the time (min) required for taking a shower." << endl;
		cin >> x;																			//	User enter number.
	}

	int waterVolume = x * 12;																//	calculate and output result.
	cout << "You needed: ";
	cout << waterVolume;
	cout << " (bottles) of the water." << endl;

	_getch();
}