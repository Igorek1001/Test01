#include <iostream>
#include <locale.h>


int main5() {
    setlocale(LC_ALL, "Russian");
    std::cout << "Проверим, делится ли одно число на другое без остатка \n\n";
    int a;
    int b;
    std::cout << "Введите первое число: ";
    std::cin >> a;
    std::cout << "Введите второе число: ";
    std::cin >> b;

    std::cout << "----Проверяем---- \n\n";

    if (a % b == 0) {
        std::cout << "Да, " << a << " делится на " << b << " без остатка!\n";
    } else if (a % b != 0) {
        std::cout << "Нет, " << a << " не делится на " << b << " без остатка!\n";
    } 
    return 0;
}