#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void task_2_nested_operators()
{
	system("cls");

	printf("2. Вычислить значение кусочно-заданной функции.\n");
	printf("Решение с помощью вложенных условных операторов.\n\n");

	double x, function_value;
	printf("Введите x: ");
	scanf_s("%lf", &x);

	if (x < -1)
		function_value = 4 * x + 1;
	else
	{
		if (x > 10)
			function_value = tan(x);
		else
			function_value = 5 * cos(x);
	}

	printf("\nЗначение кусочно-заданной функции:\n%lf", function_value);
}