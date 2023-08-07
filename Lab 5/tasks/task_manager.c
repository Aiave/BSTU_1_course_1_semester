#include <stdio.h>
#include <stdlib.h>
#include "tasks.h"

void select_task(int task_number)
{
	do
	{
		system("cls");

		printf("1. Дано целое число. Проверить, является ли оно четным положительным.\n");
		printf("2. Вычислить значение кусочно-заданной функции.\n\n");
		printf("Выберете номер задания: ");
		scanf_s("%d", &task_number);

		switch (task_number)
		{
		case 1:
		{
			task_1();
			back_to_tasks();
			break;
		}
		case 2:
		{
			task_2_manager();
			back_to_tasks();
			break;
		}
		default:
			printf("Непредвиденная ошибка!");
		}
	} while (task_number < 1 || task_number > 2);
}

void task_2_manager()
{
	int solution_method;

	do
	{
		printf("\n\nКаким способом хотите решить задачу?");
		printf("\n\n1 - с помощью вложенных условных операторов\n2 - с помощью составных логических условий\n");
		scanf_s("%d", &solution_method);
		if (solution_method == 1)
			task_2_nested_operators();
		if (solution_method == 2)
			task_2_logical_conditions();
	} while (solution_method < 1 || solution_method > 2);
}

void back_to_tasks()
{
	int command;

	do
	{
		printf("\n\nВернуться к выбору задания?\n 1 - да\n 0 - нет\n");
		scanf_s("%d", &command);
		if (command == 1)
			select_task(0);
		else
			exit(0);
	} while (command < 0 || command > 1);
}