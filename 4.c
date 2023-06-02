#include <stdio.h>
#include <string.h>

int toDecimal(char str[]) {
    int length = strlen(str);  // определяем длину строки
    int decimal = 0;  // инициализируем десятичное число

    for (int i = 0; i < length; i++) {
        decimal = decimal * 2 + (str[i] - '0');  // Умножаем десятичное число на 2 и добавляем текущий бит
        // преобразование символа в цифру происходит путем вычитания символа '0'
        // если текущий символ равен '1', то (str[i] - '0') будет равно 1
        // если текущий символ равен '0', то (str[i] - '0') будет равно 0
    }

    return decimal;  // возвращаем десятичное число
}

int main() {
    char binaryString[100];
    printf("Введите двоичное число: ");
    scanf("%s", binaryString);

    int decimalNumber = toDecimal(binaryString);  // преобразуем двоичное число в десятичное
    printf("Десятичное представление: %d\n", decimalNumber);
    return 0;
}  
