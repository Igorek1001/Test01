#include <iostream>
#include <locale.h>


int main3() {
    setlocale(LC_ALL, "Russian");
    std::cout << "Проверим четное ли число \n";
    int a;
    std::cout << "Введите число: ";
    std::cin >> a;
    std::cout << "----Проверяем---- \n";


    if (a % 2 == 0) {
        std::cout << "Число " << a << " - четное";
    }
    else {
        std::cout << "Число " << a << " - нечетное";
    }
    return 0;
}