﻿#include <stdio.h>
#include <stdlib.h>
#include "tasks.h"

void select_task(int task_number)
{
	do
	{
		system("cls");

		printf("1. Дано целое число. Проверить, является ли оно четным положительным.\n\n");
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
		default:
			printf("Непредвиденная ошибка!");
		}
	} while (task_number < 1 || task_number > 1);
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