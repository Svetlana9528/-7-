#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, ".UTF8");
    int number;

    printf("Введите число от 1 до 13: ");
    scanf("%d", &number);

    switch (number) {
    case 1:
        printf("один\n");
        break;
    case 2:
        printf("два\n");
        break;
    case 3:
        printf("три\n");
        break;
    case 4:
        printf("четыре\n");
        break;
    case 5:
        printf("пять\n");
        break;
    case 6:
        printf("шесть\n");
        break;
    case 7:
        printf("семь\n");
        break;
    case 8:
        printf("восемь\n");
        break;
    case 9:
        printf("девять\n");
        break;
    case 10:
        printf("десять\n");
        break;
    case 11:
        printf("одиннадцать\n");
        break;
    case 12:
        printf("двенадцать\n");
        break;
    case 13:
        printf("тринадцать\n");
        break;
    default:
      
        printf("ошибка\n");
        break;
    }

    return 0;
}
