﻿#include <stdio.h>
#include <locale.h>
#include <algorithm>
#include "conio.h"
using namespace std;
int main()
{
    int getch();
    setlocale(LC_ALL, "Russian");
    int x, y;
    printf("Введите Х:");
    scanf_s("%d", &x);
    printf("Введите Y:");
    scanf_s("%d", &y);

    int i = y;
    int c = 0;
    int d = 0;