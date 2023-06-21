#include <iostream>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int leftX, leftY, rightX, rightY, pointX, pointY;

    std::cout << "Введіть координати верхнього лівого кута прямокутника (X, Y): ";
    std::cin >> leftX >> leftY;

    std::cout << "Введіть координати правого нижнього кута прямокутника (X, Y): ";
    std::cin >> rightX >> rightY;

    std::cout << "Введіть координати точки (X, Y): ";
    std::cin >> pointX >> pointY;

    if (pointX >= leftX && pointX <= rightX && pointY >= leftY && pointY <= rightY) {
        std::cout << "Крапка належить прямокутнику" << std::endl;
    }
    else {
        std::cout << "Крапка не належить прямокутнику" << std::endl;
    }

    return 0;
}
