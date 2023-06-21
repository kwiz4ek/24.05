#include <iostream>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int number;

    std::cout << "Введіть число: ";
    std::cin >> number;

    if (number > 0) {
        std::cout << "Число додатне" << std::endl;
    }
    else if (number < 0) {
        std::cout << "Число негативне" << std::endl;
    }
    else {
        std::cout << "Число равне нулю" << std::endl;
    }

    return 0;
}
