#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//задачи повышенной сложности
void task_5()
{
	system("cls");

	printf("Дано действительное число a. Не пользуясь никакими другими арифметическими операциями, кроме умножения,\nвыполнить вычисления.\n\n");

	//в названиях переменных "a" - число, цифра рядом с "a" - номер степени этого числа
	double a, a2, a3, a4, a5, a6, a8, a10, a13, a15, a16, a20;
	printf("Введите действительное число a (используйте запятую): ");
	scanf_s("%lf", &a);

	printf("\na) a^4 за две операции:");
	a2 = a * a;
	a4 = a2 * a2;
	printf("\n\t1) a^2 = %lf*%lf = %lf", a, a, a2);
	printf("\n\t2) a^4 = a^2*a^2 = %lf*%lf = %lf", a2, a2, a4);

	printf("\n\nb) a^13 за пять операций:");
	a2 = a * a;
	a3 = a2 * a;
	a5 = a3 * a2;
	a10 = a5 * a5;
	a13 = a10 * a3;
	printf("\n\t1) a^2 = %lf*%lf = %lf", a, a, a2);
	printf("\n\t2) a^3 = a^2*a = %lf*%lf = %lf", a2, a, a3);
	printf("\n\t3) a^5 = a^3*a^2 = %lf*%lf = %lf", a3, a2, a5);
	printf("\n\t4) a^10 = a^5*a^5 = %lf*%lf = %lf", a5, a5, a10);
	printf("\n\t5) a^13 = a^10*a^3 = %lf*%lf = %lf", a10, a3, a13);

	printf("\n\nc) a^6 за три операции:");
	a2 = a * a;
	a4 = a2 * a2;
	a6 = a4 * a2;
	printf("\n\t1) a^2 = %lf*%lf = %lf", a, a, a2);
	printf("\n\t2) a^4 = a^2*a^2 = %lf*%lf = %lf", a2, a2, a4);
	printf("\n\t3) a^6 = a^4*a^2 = %lf*%lf = %lf", a4, a2, a6);

	printf("\n\nd) a^15 за пять операций:");
	a2 = a * a;
	a4 = a2 * a2;
	a5 = a4 * a;
	a10 = a5 * a5;
	a15 = a10 * a5;
	printf("\n\t1) a^2 = %lf*%lf = %lf", a, a, a2);
	printf("\n\t2) a^4 = a^2*a^2 = %lf*%lf = %lf", a2, a2, a4);
	printf("\n\t3) a^5 = a^4*a = %lf*%lf = %lf", a4, a, a5);
	printf("\n\t4) a^10 = a^5*a^5 = %lf*%lf = %lf", a5, a5, a10);
	printf("\n\t5) a^15 = a^10*a^5 = %lf*%lf = %lf", a10, a5, a15);

	printf("\n\ne) a^3 и а^10 за четыре операции:");
	a2 = a * a;
	a3 = a2 * a;
	a5 = a3 * a2;
	a10 = a5 * a5;
	printf("\n\t1) a^2 = %lf*%lf = %lf", a, a, a2);
	printf("\n\t2) a^3 = a^2*a = %lf*%lf = %lf", a2, a, a3);
	printf("\n\t3) a^5 = a^3*a^2 = %lf*%lf = %lf", a3, a2, a5);
	printf("\n\t4) a^10 = a^5*a^5 = %lf*%lf = %lf", a5, a5, a10);

	printf("\n\nf) a^4 и a^20 за пять операций:");
	a2 = a * a;
	a4 = a2 * a2;
	a8 = a4 * a4;
	a16 = a8 * a8;
	a20 = a16 * a4;
	printf("\n\t1) a^2 = %lf*%lf = %lf", a, a, a2);
	printf("\n\t2) a^4 = a^2*a^2 = %lf*%lf = %lf", a2, a2, a4);
	printf("\n\t3) a^8 = a^4*a^4 = %lf*%lf = %lf", a4, a4, a8);
	printf("\n\t4) a^16 = a^8*a^8 = %lf*%lf = %lf", a8, a8, a16);
	printf("\n\t5) a^20 = a^16*a^4 = %lf*%lf = %lf", a16, a4, a20);
}