#include "stdio.h"
#include "math.h"
#define _CRT_SECURE_NO_WARNINGS

// lab01
/*
* x^a*x / e^-a*x
*/

int main()
{
    float a, b, x;

    // Запитуємо користувача ввести значення для a, b та x
    printf("Введіть значення a: ");
    if (scanf("%f", &a) != 1) {
        printf("Помилка введення для a.\n");
        return 1;
    }

    printf("Введіть значення b: ");
    if (scanf("%f", &b) != 1) {
        printf("Помилка введення для b.\n");
        return 1;
    }

    printf("Введіть значення x: ");
    if (scanf("%f", &x) != 1) {
        printf("Помилка введення для x.\n");
        return 1;
    }

    // Обчислюємо результат
    float result = pow(x, a * x) / exp(-a * x);

    // Виводимо результат
    printf("Результат: %.2f\n", result);

    return 0;
}