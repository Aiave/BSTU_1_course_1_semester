#include <stdio.h>
#include <stdlib.h>

//1 задание с помощью массивов
void task_4()
{
	system("cls");

	printf("1. Автомобиль на каждом из пяти одинаковых по длине участках дороги шел с известной средней cкоростью.\nОпределить среднюю скорость на всём пути.\n\n");

	//ввод скоростей автомобиля в массив с проверкой
	int car_speeds[5];
	for (int i = 0; i < 5; i++)
	{
		do {
			printf("Введите скорость автомобиля на %d участке дороги: ", i + 1);
			scanf_s("%d", &car_speeds[i]);
		} while (car_speeds[i] <= 0);
	}

	//находим время для каждого из участков дороги, а также общее (суммарное) время
	double sum_of_times = 0, times_for_road_segments[5];
	for (int i = 0; i < 5; i++)
	{
		times_for_road_segments[i] = 1.0 / car_speeds[i];
		sum_of_times += times_for_road_segments[i];
	}

	//находим среднюю скорость, разделив расстояние на общее время
	double average_speed;
	average_speed = 5 / sum_of_times;
	printf("Средняя скорость автомобиля на всём пути: %0.2lf", average_speed);
}