#include <stdio.h>
#include <stdlib.h>

void task_2()
{
	system("cls");

	printf("2. Вводятся два числа и символ операции над ними (+; -; *; /). Вывести результаты вычислений.\n");

	float number_1, number_2, result = 0;
	char operation;
	printf("\nБез пробелов ведите два числа и символ-операцию между ними:\n");
	scanf_s("%f%c%f", &number_1, &operation, 1, &number_2);

	switch (operation)
	{
	case '+':
		result = number_1 + number_2;
		printf("\nРезультат вычислений:\n%.2f", result);
		break;
	case '-':
		result = number_1 - number_2;
		printf("\nРезультат вычислений:\n%.2f", result);
		break;
	case '*':
		result = number_1 * number_2;
		printf("\nРезультат вычислений:\n%.2f", result);
		break;
	case '/':
		if (number_2 == 0.0)
		{
			printf("\nОшибка! На 0 делить нельзя!");
		}
		else
		{
			result = number_1 / number_2;
			printf("\nРезультат вычислений:\n%.2f", result);
		}
		break;
	default:
		printf("\nОшибка! Некорректный ввод!");
	}
}

//scanf_s поддерживает многобайтные символы со спецификатором %c, поэтому надо явно указывать количество байтов,
//которое она должна считать.
//Иначе говоря, т.к. работаем со scanf_s, то после подстановки знака указываем количество считываемых символов.