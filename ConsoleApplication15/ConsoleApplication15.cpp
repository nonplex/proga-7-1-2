﻿#include <iostream>
#include <cmath>
#include <locale>
#include <stdlib.h>
//Лабораторная работа номер 7. Вариант 21, задание номер 1. Указатель
//Написать функцию f(x,y)
//вычисляющую входит ли начало координат в отрезок
//с заданными координатами и лежащий на оси OX. Если входит,
//то функция должна вернуть 1, иначе – 0.
using namespace std;
//Выполняет код, не возвращая значения,Функция
void f(int x, int x2, int y, int *result) {
    if ((x <= 0) && (x2 >= 0) && (y == 0))
        *result = 1;
    else
        if ((x >= 0) && (x2 <= 0) && (y == 0))
            *result = 1;
        else
            *result = 0;
}
int main() {
    setlocale(LC_ALL, "ru");
    int x, x2, y;
    cout << "Введите Первую координату: ";
    cin >> x;
    cout << "Введите Вторую координату: ";
    cin >> x2;
    cout << "Введите координату y: ";
    cin >> y;
    //возвращение значения с использованием указателя
    int result;
    f(x, x2, y, &result);
    if(result)
       cout << "Начало координат входит в отрезок";
    else
        cout << "Начало координат не входит в отрезок";
}
