#include <stdio.h>
#include <stdlib.h>
#include "tasks.h"

//выбор задания
void select_task(int task_number)
{
	do
	{
		system("cls");
		printf("1. Автомобиль на каждом из пяти одинаковых по длине участках дороги шел с известной средней cкоростью.\nОпределить среднюю скорость на всём пути.\n"
			"2. Определить периметр и площадь прямоугольного треугольника по заданным длинам двух катетов а и b.\n"
			"3. Вычислить значение выражения при заданных с клавиатуры значениях переменных согласно варианту.\n"
			"4. Первое задание с помощью массивов.\n"
			"5. Дано действительное число a. Не пользуясь никакими другими арифметическими операциями, кроме умножения,\nвыполнить вычисления. Задачи повышенной сложности.\n\n"
			"Выберете номер задания: ");
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
			task_3();
			back_to_tasks();
			break;
		}
		case 4:
		{
			task_4();
			back_to_tasks();
			break;
		}
		case 5:
		{
			task_5();
			back_to_tasks();
			break;
		}
		default:
			printf("Непредвиденная ошибка!");
		}
	} while (task_number < 1 || task_number > 5);
}

//вернуться к заданиям
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