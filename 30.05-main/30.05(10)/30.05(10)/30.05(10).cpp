#include <iostream>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int number;

    std::cout << "Введіть ціле число: ";
    std::cin >> number;

    int digitsCount = 0;
    int tempNumber = number;

    if (tempNumber == 0) {
        digitsCount = 1;
    }
    else {
        while (tempNumber != 0) {
            tempNumber /= 10;
            digitsCount++;
        }
    }

    std::cout << "Кількість цифр у числі: " << digitsCount << std::endl;

    return 0;
}
