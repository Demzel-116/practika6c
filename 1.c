#include <stdio.h>
#include <string.h>
// Задача 1: Функция max
int max(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
    // Или: return (a > b) ? a : b;
}
