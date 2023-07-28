#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//задание 2
void task_2()
{
	system("cls");

	printf("2. Определить периметр и площадь прямоугольного треугольника по заданным длинам двух катетов а и b.\n\n");

	double side_length_a, side_length_b, side_length_c, perimeter_of_the_triangle, area_of_the_triangle;
	printf("Введите катет a: ");
	scanf_s("%lf", &side_length_a);
	printf("Введите катет b: ");
	scanf_s("%lf", &side_length_b);

	if (side_length_a > 0.0 && side_length_b > 0.0)
	{
		side_length_c = sqrt(side_length_a * side_length_a + side_length_b * side_length_b); //находим гипотенузу по теореме Пифагора; a*a работает быстрее pow(a, 2)
		perimeter_of_the_triangle = side_length_a + side_length_b + side_length_c;
		area_of_the_triangle = 0.5 * side_length_a * side_length_b;
		printf("Периметр заданного прямоугольного треугольника равен %0.2lf, а его площадь равна %0.2lf.", perimeter_of_the_triangle, area_of_the_triangle);
	}
	else printf("Ошибка ввода!");
}