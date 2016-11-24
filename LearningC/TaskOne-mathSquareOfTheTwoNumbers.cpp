#include <stdio.h>
#include <conio.h>
using namespace std;

int math(int x)
{
	return x*x;
}

int main(void)
{
	int x;
	scanf_s("%i", &x);
	printf("x = %i \n", math(x));
	_getch();
}
