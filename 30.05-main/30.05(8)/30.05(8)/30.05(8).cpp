#include <iostream>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int number;

    std::cout << "Введіть число: ";
    std::cin >> number;

    if (number % 3 == 0 && number % 5 == 0 && number % 7 == 0) {
        std::cout << "Число кратне 3, 5 та 7 одночасно" << std::endl;
    }
    else {
        std::cout << "Число не кратне 3, 5 та 7 одночасно" << std::endl;
    }

    return 0;
}
