/* 1. С начала суток прошло N секунд (N – целое). Выразить текущее время в формате чч:мм:сс. */

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Russian");

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

	return 0;
}