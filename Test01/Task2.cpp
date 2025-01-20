#include <iostream>
#include <locale.h>


int main2() {
    setlocale(LC_ALL, "Russian");
    std::cout << "Проверим как вы складываете в уме \n";
    int a;
    int b;
    int d;
    std::cout << "Введите первое число: ";
    std::cin >> a;
    std::cout << "Введите второе число: ";
    std::cin >> b;
    int c = a + b;
    std::cout << "Введите их сумму: ";
    std::cin >> d;
    std::cout << "----Проверяем---- \n";


    if (c == d) {
        std::cout << "Верно!";
    } else {
        std::cout << "Ошибка! Верный результат:" << c;
    }
    return 0;
}