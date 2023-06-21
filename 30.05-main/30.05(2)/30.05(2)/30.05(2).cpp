#include <iostream>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int number1, number2, number3;

    std::cout << "Введіть три числа: ";
    std::cin >> number1 >> number2 >> number3;

    if (number1 <= number2 && number1 <= number3) {
        std::cout << "Найменьше число: " << number1 << std::endl;
    }
    else if (number2 <= number1 && number2 <= number3) {
        std::cout << "Найменьше число: " << number2 << std::endl;
    }
    else {
        std::cout << "Найменьше число: " << number3 << std::endl;
    }

    return 0;
}
