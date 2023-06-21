#include <iostream>
#include <cctype>
#include <Windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    char symbol;

    std::cout << "Введіть символ: ";
    std::cin >> symbol;

    if (std::isdigit(symbol)) {
        std::cout << "Введений символ є цифрою" << std::endl;
    }
    else if (std::isalpha(symbol)) {
        std::cout << "Введений символ є буквою" << std::endl;
    }
    else if (std::ispunct(symbol)) {
        std::cout << "Введений символ є знаком пунктуації" << std::endl;
    }
    else {
        std::cout << "Введений символ не відноситься до цифри, літери або знаку пунктуації" << std::endl;
    }

    return 0;
}
