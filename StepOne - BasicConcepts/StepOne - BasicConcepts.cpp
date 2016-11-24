/*
This file it explains the basic things in C++ language.
Such as: basic operations, functions, standart IO functions.
*/

#include <stdio.h> //Include - basic operation for connect library. <stdio.h> - standart library for IO functions in C++.
#include <conio.h> //Include console IO functions.
#include <iostream> //Connect library to organize stream IO functions.

using namespace std; //Provide acces to std namespace.

int mathX(/*Arguments writing there. Example ->*/int x)							//
{																						//
	//Function body.																	//		<<< Function.
	return x * x; //math square of the numbers.											//
}																						//

int callAndOutMathX()
{
	int x;
	cin >> x; //Request variable X.
	return x;
	cout << mathX(x)/*Calling first function.*/ << endl;
}

int main(void) //Primary function with empty arguments -> (void).
{
	//Write your code there =)
	callAndOutMathX(); //Not work here. WTF??7
	_getch(); //Wait inserting char.
}



/*
BONUS()
{

Most popular functions in <stdio.h>:

FILE *fopen(const char *filename, const char *mode)     // �������� �����
int fclose(FILE *stream)     // �������� �����

int printf(const char *format, ...)     // ��������������� ���������� �����
int fprintf(FILE *stream, const char *format�, ...)     // ��������������� ���� �� �����
int sprintf(char *s, const char *format, ...)     // ��������������� ����� � ����� (������)

int scanf(const char *format, ...)     // �������������� ���������� ����
int fscanf(FILE *stream, const char *format, ...)     // �������������� ����
int sscanf (const char *s, const char *format, ...)     // �������������� ���� �� ������ (������)

int fgetc(FILE *stream)     // ������ ������ �� �����
char *fgets(char *s, int n, FILE *stream)     // ������ ������ �� �����
int fputc(int �, FILE *stream)     // ���������� ������ � ����
int fputs(const char *s, FILE *stream)     // ���������� ������ � ����
int getchar(void)     // ������ ������ �� stdin
char *gets(char *s)     // ������ ������ �� stdin
int putchar(int �)     // ���������� ������ � stdout
int puts(const char *s)     // ���������� ������ � stdout
int ungetc(int �, FILE *stream)     // ���������� ������ ������� � ���� ��� ������������ ������

}
*/