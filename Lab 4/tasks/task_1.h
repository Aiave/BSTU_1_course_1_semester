/* 1. � ������ ����� ������ N ������ (N � �����). �������� ������� ����� � ������� ��:��:��. */

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Russian");

	int number_N, seconds, minutes, hours;
	printf("N - ����� �����, ������������ ���������� ������, ��������� � ������ �����. ������� N: ");
	scanf_s("%d", &number_N);

	if (number_N >= 0)
	{
		//�������� �������� �������, ����������� �����
		seconds = number_N % 60;
		minutes = (number_N / 60) % 60;
		hours = number_N / 60 / 60;
		printf("������� �����: %.2d:%.2d:%.2d", hours, minutes, seconds);
	}
	else
	{
		printf("���� ����� N �� ������������� �������!");
	}

	return 0;
}