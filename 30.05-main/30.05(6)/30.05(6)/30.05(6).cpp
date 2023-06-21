#include <iostream>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int number, N, M;

    std::cout << "Введіть число: ";
    std::cin >> number;

    std::cout << "Введіть значення N: ";
    std::cin >> N;

    std::cout << "Введіть значення M: ";
    std::cin >> M;

    if (number >= N && number <= M) {
        std::cout << "Число належить діапазону від " << N << " до " << M << std::endl;
    }
    else {
        std::cout << "Число не належить діапазону від " << N << " до " << M << std::endl;
    }

    return 0;
}
