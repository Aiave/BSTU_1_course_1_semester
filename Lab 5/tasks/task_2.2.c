#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void task_2_logical_conditions()
{
	system("cls");

	printf("2. Вычислить значение кусочно-заданной функции.\n");
	printf("Решение с помощью составных логических условий.\n\n");

	double x, function_value;
	printf("Введите x: ");
	scanf_s("%lf", &x);

	if (x < -1)
		function_value = 4 * x + 1;
	if (x >= -1 && x <= 10)
		function_value = 5 * cos(x);
	if (x > 10)
		function_value = tan(x);

	printf("\nЗначение кусочно-заданной функции:\n%lf", function_value);
}