#include <stdio.h>
#include <stdlib.h>

void task_1()
{
	system("cls");

	printf("1. Дано целое число. Проверить, является ли оно четным положительным.\n\n");

	int number;
	printf("Введите число: ");
	scanf_s("%d", &number);

	if (number > 0 && number % 2 == 0)
	{
		printf("Число %d является чётным положительным.", number);
	}
	else
	{
		printf("Число %d не является чётным положительным.", number);
	}
}