#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//задание 3
void task_3()
{
	system("cls");

	printf("3. Вычислить значение выражения при заданных с клавиатуры значениях переменных согласно варианту.\n\n");

	double variable_x, expression_value;
	printf("Введите x: ");
	scanf_s("%lf", &variable_x);

	if (2 * (variable_x - 2) * (variable_x - 2) * (8 - variable_x) - 1 > 0.0)
	{
		expression_value = pow(2 * (variable_x - 2) * (variable_x - 2) * (8 - variable_x) - 1, 1.0 / 3.0);
	}
	else
	{
		expression_value = pow((2 * (variable_x - 2) * (variable_x - 2) * (8 - variable_x) - 1) * (-1), 1.0 / 3.0) * (-1);
	}
	printf("Значение выражения: %lf", expression_value);
}