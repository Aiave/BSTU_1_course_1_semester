#include <stdio.h>
#include <stdlib.h>
#include "tasks.h"

void select_task(int task_number)
{
	do
	{
		system("cls");

		printf("Задачи первого типа:\n");
		printf("1. По номеру введенного месяца вывести название месяца и название сезона.\n");
		printf("2. Вводятся два числа и символ операции над ними (+; -; *; /). Вывести результаты вычислений.\n\n");
		printf("Задачи второго типа:\n");
		printf("3. Заданы радиусы четырех окружностей. Определить и вывести минимальную из площадей этих окружностей.\n");
		printf("4. Для каждого из треугольников заданы координаты его вершин. Определить, какой из треугольников имеет минимальную\n"
			"площадь и вывести её значение.\n\n");
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
			task_2();
			back_to_tasks();
			break;
		}
		case 3:
		{
			//task_3();
			back_to_tasks();
			break;
		}
		case 4:
		{
			//task_4();
			back_to_tasks();
			break;
		}
		default:
			printf("Непредвиденная ошибка!");
		}
	} while (task_number < 1 || task_number > 4);
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