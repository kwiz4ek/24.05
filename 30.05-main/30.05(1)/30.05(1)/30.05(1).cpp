#include <iostream>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int number1, number2, number3;

    std::cout << "Введіть три числа: ";
    std::cin >> number1 >> number2 >> number3;

    int minNumber = number1;

    if (number2 < minNumber) {
        minNumber = number2;
    }

    if (number3 < minNumber) {
        minNumber = number3;
    }

    std::cout << "Найменьше число: " << minNumber << std::endl;

    return 0;
}
