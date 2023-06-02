#include <stdio.h>

struct Coord {
    int x;
    int y;
};

int canGet(struct Coord start, struct Coord finish) {
    // проверяем, находятся ли клетки на одной диагонали
    if (abs(start.x - finish.x) == abs(start.y - finish.y)) {
        return 1;  // можно попасть одним ходом
    } else {
        return 0;  // нельзя попасть одним ходом
    }
}

int main() {
    // пример использования функции canGet
    struct Coord start = {2, 3};
    struct Coord finish = {5, 6};

    int result = canGet(start, finish);

    if (result) {
        printf("слон может попасть с первой клетки на вторую одним ходом.\n");
    } else {
        printf("слон не может попасть с первой клетки на вторую одним ходом.\n");
    }

    return 0;
}
