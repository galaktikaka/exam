#include <stdio.h>

int main() { 
    int current;
    int previous;
    int count;

    count = 0;  // инициализируем счетчик
    // читаем первое число
    scanf("%d", &previous);
    // читаем последующие числа и сравниваем их с предыдущим
    while (scanf("%d", &current) && current != 0) {
        if (current == previous + 3) {
            count++;  // увеличиваем счетчик, если текущее число больше предыдущего на 3
        }
        previous = current;  // обновляем значение предыдущего числа
    }

    printf("%d\n", count); 
    return 0;
} 
