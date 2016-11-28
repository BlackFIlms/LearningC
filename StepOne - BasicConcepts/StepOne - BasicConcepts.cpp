/*
This file it explains the basic things in C++ language.
Such as: basic operations, functions, standart IO functions.
*/

#include <stdio.h> //Include - basic operation for connect library. <stdio.h> - standart library for IO functions in C++.
#include <conio.h> //Include console IO functions.
#include <iostream> //Connect library to organize stream IO functions.

using namespace std; //Provide acces to std namespace.

int x;

int inMathX()
{
	cin >> x; //Request variable X.
	return x;
}

int mathX(/*Arguments writing there. Example ->int x*/)									//
{																						//
	//Function body.																	//		<<< Function.
	x = inMathX(); //IMPORTANT! without assignment is not working!!!					//
	return x * x; //math square of the numbers.											//
}																						//

int outMathX()
{
	cout << mathX()/*Calling first function.*/ << endl;
	return x;

}

int main(void) //Primary function with empty arguments -> (void).
{
	//Write your code there =)
	outMathX(); //Calling function. Don't working withou 23 line.
	_getch(); //Wait inserting char.
}



/*
BONUS()
{

Most popular functions in <stdio.h>:

FILE *fopen(const char *filename, const char *mode)     // открытие файла
int fclose(FILE *stream)     // закрытие файла

int printf(const char *format, ...)     // форматированный консольный вывод
int fprintf(FILE *stream, const char *formatб, ...)     // форматированный ввод из файла
int sprintf(char *s, const char *format, ...)     // форматированный вывод в буфер (строку)

int scanf(const char *format, ...)     // фоматированный консольный ввод
int fscanf(FILE *stream, const char *format, ...)     // фоматированный ввод
int sscanf (const char *s, const char *format, ...)     // фоматированный ввод из буфера (строки)

int fgetc(FILE *stream)     // читает символ из файла
char *fgets(char *s, int n, FILE *stream)     // читает строку из файла
int fputc(int с, FILE *stream)     // записывает символ в файл
int fputs(const char *s, FILE *stream)     // записывает строку в файл
int getchar(void)     // читает символ из stdin
char *gets(char *s)     // читает строку из stdin
int putchar(int с)     // записывает символ в stdout
int puts(const char *s)     // записывает строку в stdout
int ungetc(int с, FILE *stream)     // возвращает символ обратно в файл для последующего чтения

}
*/
