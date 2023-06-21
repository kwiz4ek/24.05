#include <iostream>
#include <Windows.h>
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int number;

    std::cout << "Введіть п'ятизначне число: ";
    std::cin >> number;

    int originalNumber = number;
    int reversedNumber = 0;

    while (number != 0) {
        int remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }

    if (originalNumber == reversedNumber) {
        std::cout << "Число є паліндромом" << std::endl;
    }
    else {
        std::cout << "Число не є паліндромом" << std::endl;
    }

    return 0;
}
