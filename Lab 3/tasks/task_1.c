#include <stdio.h>
#include <stdlib.h>

void task_1()
{
	system("cls");

	printf("1. Автомобиль на каждом из пяти одинаковых по длине участках дороги шел с известной средней cкоростью.\nОпределить среднюю скорость на всём пути.\n\n");

	int car_speed_1, car_speed_2, car_speed_3, car_speed_4, car_speed_5;
	double time_for_road_segment_1, time_for_road_segment_2, time_for_road_segment_3, time_for_road_segment_4, time_for_road_segment_5, average_speed;
	printf("Введите скорость автомобиля на первом участке дороги: ");
	scanf_s("%d", &car_speed_1);
	printf("Введите скорость автомобиля на втором участке дороги: ");
	scanf_s("%d", &car_speed_2);
	printf("Введите скорость автомобиля на третьем участке дороги: ");
	scanf_s("%d", &car_speed_3);
	printf("Введите скорость автомобиля на четвёртом участке дороги: ");
	scanf_s("%d", &car_speed_4);
	printf("Введите скорость автомобиля на пятом участке дороги: ");
	scanf_s("%d", &car_speed_5);

	if (car_speed_1 > 0.0 && car_speed_2 > 0.0 && car_speed_3 > 0.0 && car_speed_4 > 0.0 && car_speed_5 > 0.0)
	{
		time_for_road_segment_1 = 1.0 / car_speed_1;
		time_for_road_segment_2 = 1.0 / car_speed_2;
		time_for_road_segment_3 = 1.0 / car_speed_3;
		time_for_road_segment_4 = 1.0 / car_speed_4;
		time_for_road_segment_5 = 1.0 / car_speed_5;

		average_speed = 5 / (time_for_road_segment_1 + time_for_road_segment_2 + time_for_road_segment_3 + time_for_road_segment_4 + time_for_road_segment_5);

		printf("Средняя скорость автомобиля на всём пути: %0.2lf", average_speed);
	}
	else
	{
		printf("Ошибка! Скорость не может быть нулевой!");
	}
}