#ifndef TASK_1 //если штука (макрос) не объявлена, то выполняется всё
#define TASK_1 //отсюда, в сам define можно запихнуть что угодно, кроме констант лучше ничего не записывать

void print();

#endif //досюда



//без этой штуки, если вызвать файл 2 раза, код упадёт
//по сути вместо #include "tasks/task_1.h" вставляется кусок кода

/*

к примеру, код:
#include "tasks/task_1.h"
#include "tasks/task_1.h"

превратится во что-то вроде:
#ifndef TASK_1		-- TASK_1 ещё не существует, то выполнить код с 22 по 25 строки
#define TASK_1		-- объявить макрос TASK_1
void print() {}		-- вставить код
#endif
#ifndef TASK_1		-- TASK_1 уже создан, поэтому пропустить код с 26 по 29 строки
#define TASK_1
void print1() {}
#endif

вся эта штука по итогу превратится в:
void print() {}			-- правильно!

а не во что-то вроде:
void print() {}
void print1() {}		-- неправильно!
*/

//#pragma once - плюсовая штука, делает то же самое
//это просто команды препроцессора

/*
В заголовочных файлах (.h):

void print();
void print();
void print();
void print();
void print();
void print();
void print();
void print();	-- норм

void print() {}
void print() {}	-- ошибка!
*/