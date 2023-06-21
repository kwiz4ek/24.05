#include <iostream>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int x, y;

    std::cout << "Введіть число x: ";
    std::cin >> x;

    std::cout << "Введіть число y: ";
    std::cin >> y;

    if (x % y == 0) {
        std::cout << x << " кратно " << y << std::endl;
    }
    else {
        std::cout << x << " не кратно " << y << std::endl;
    }

    return 0;
}
