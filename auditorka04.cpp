// auditorka04.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#define SIZE 256

int main()
{
	SetConsoleOutputCP(1251);
	int arr[SIZE] = { 0 };
	char string[100];
	printf("%s", "Потрібно ввести слово: ");
	gets_s(string);
	int str_len = strlen(string);

	int i;
	for (i = 0; i < str_len; i++)
	{
		arr[(unsigned char)string[i]]++;
	}
	for (i = 0; i < SIZE; i++)
	{
		if (arr[i])
			printf("Символ %c повторюється %d раз\n", char(i), arr[i]);
	}
	return 0;
}

