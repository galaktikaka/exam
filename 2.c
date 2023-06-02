#include <stdio.h>

float sumFoo(int n) {
    float sum = 0.0;

    for (int i = 1; i <= n; i++) {
        float term = 1.0 / (i * i);  // вычисляем очередной член ряда
        sum += term;  // добавляем член ряда к сумме
    }

    return sum;
}

int main() {
    int n = 5;
    float result = sumFoo(n);

    printf("смма ряда для n=%d: %f\n", n, result);

    return 0;
}
