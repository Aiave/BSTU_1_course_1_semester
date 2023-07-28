/* 1. Дано четырехзначное число. Определить число, полученное записью цифр исходного числа в обратном порядке. */

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "Russian");

	int four_digit_number, inverted_number, units, tens, hundreds, thousands;
	printf("Введите четырёхзначное число: ");
	scanf_s("%d", &four_digit_number);

	if (999 < abs(four_digit_number) && abs(four_digit_number) < 10000)
	{
		//отрезаем разряды с правой стороны
		units = four_digit_number % 10;
		tens = (four_digit_number / 10) % 10;
		hundreds = (four_digit_number / 100) % 10;
		thousands = four_digit_number / 1000;
		inverted_number = units * 1000 + tens * 100 + hundreds * 10 + thousands;
		printf("Число в обратном порядке: %d", inverted_number);
	}
	else
	{
		printf("Данное число не соответствует условию!");
	}

	return 0;
}


//если бы отрезали разряды с левой стороны

/*	thousands = four_digit_number / 1000;
	hundreds = (four_digit_number % 1000) / 100;
	tens = (four_digit_number % 100) / 10;
	units = four_digit_number % 10;
*/