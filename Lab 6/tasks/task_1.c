#include <stdio.h>
#include <stdlib.h>
#include "tasks.h"

void task_1()
{
	system("cls");

	printf("1. По номеру введенного месяца вывести название месяца и название сезона.\n");

	int month;
	do {
		printf("\nВведите номер месяца: ");
		scanf_s("%d", &month);
	} while (month < 1 || month > 12);

	name_of_the_month(month);
	season(month);
}

void name_of_the_month(int month)
{
	switch (month)
	{
	case 1:
	{
		printf("Январь.");
		break;
	}
	case 2:
	{
		printf("Февраль.");
		break;
	}
	case 3:
	{
		printf("Март.");
		break;
	}
	case 4:
	{
		printf("Апрель.");
		break;
	}
	case 5:
	{
		printf("Май.");
		break;
	}
	case 6:
	{
		printf("Июнь.");
		break;
	}
	case 7:
	{
		printf("Июль.");
		break;
	}
	case 8:
	{
		printf("Август.");
		break;
	}
	case 9:
	{
		printf("Сентябрь.");
		break;
	}
	case 10:
	{
		printf("Октябрь.");
		break;
	}
	case 11:
	{
		printf("Ноябрь.");
		break;
	}
	case 12:
	{
		printf("Декабрь.");
		break;
	}
	default:
		break;
	}
}

void season(int month)
{
	switch (month)
	{
	case 1:
	case 2:
	case 12:
	{
		printf("\nЗима.");
		break;
	}
	case 3:
	case 4:
	case 5:
	{
		printf("\nВесна.");
		break;
	}
	case 6:
	case 7:
	case 8:
	{
		printf("\nЛето.");
		break;
	}
	case 9:
	case 10:
	case 11:
	{
		printf("\nОсень.");
		break;
	}
	default:
		break;
	}
}