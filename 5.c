#include <stdio.h>

struct PC {
    int speed;  // скорость компьютера
    int RAM;    // объем оперативной памяти компьютера
};

struct PC* fastestPC(struct PC data[], int n) {
    struct PC* fastest = &data[0];  // инициализируем указатель на первый компьютер

    // перебираем все компьютеры, начиная со второго
    for (int i = 1; i < n; i++) {
        // если текущий компьютер быстрее или имеет больший объем памяти, чем самый быстрый компьютер,
        // обновляем указатель на самый быстрый компьютер
        if (data[i].speed > fastest->speed || (data[i].speed == fastest->speed && data[i].RAM > fastest->RAM)) {
            fastest = &data[i];
        }
    }

    return fastest;  // возвращаем указатель на самый быстрый компьютер
} 

int main() {
    // пример использования функции fastestPC

    struct PC computers[] = {
        {3000, 8},   // компьютер 1
        {2500, 16},  // компьютер 2
        {3000, 12}   // компьютер 3
    };

    struct PC* fastest = fastestPC(computers, sizeof(computers) / sizeof(computers[0]));

    // выводим информацию о самом быстром компьютере
    printf("Самый быстрый компьютер: Speed = %d, RAM = %d\n", fastest->speed, fastest->RAM);

    return 0;
}
