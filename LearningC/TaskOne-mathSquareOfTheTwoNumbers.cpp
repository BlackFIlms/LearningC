/*
Task:
Write math squad of the numbers.
*/

#include <stdio.h>
#include <conio.h>
using namespace std;

int math(int x)
{
	return x*x; //return and math squad of the numbers.
}

int main(void)
{
	int x;
	printf("Enter random number, for math sqaure of the numbers \n"); //print: request nember
	scanf_s("%i", &x); //input x
	printf("x = %i \n", math(x)); //output result function math
	_getch();
}
