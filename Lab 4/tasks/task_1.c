#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//задание 1
void task_1()
{
	system("cls");

	printf("1. С начала суток прошло N секунд (N – целое). Выразить текущее время в формате чч:мм:сс.\n\n");

	int number_N, seconds, minutes, hours;
	printf("N - целое число, обозначающее количество секунд, прошедших с начала суток. Введите N: ");
	scanf_s("%d", &number_N);

	if (number_N >= 0)
	{
		//делением отрезаем разряды, вычесленные ранее
		seconds = number_N % 60;
		minutes = (number_N / 60) % 60;
		hours = number_N / 60 / 60;
		printf("Текущее время: %.2d:%.2d:%.2d", hours, minutes, seconds);
	}
	else
	{
		printf("Ваше число N не соответствует условию!");
	}
}