#include <iostream>
#include <cmath>

int main() {
    int number;

    std::cout << "Введіть число: ";
    std::cin >> number;

    int absoluteValue = std::abs(number);

    std::cout << "Модуль числа: " << absoluteValue << std::endl;

    return 0;
}
