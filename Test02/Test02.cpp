#include <iostream>
#include <locale.h>


int main() {
    setlocale(LC_ALL, "Russian");
    std::cout << "Найдем минимальное значение из двух чисел\n";
    int a;
    int b;
    std::cout << "Введите первое число: ";
    std::cin >> a;
    std::cout << "Введите второе число: ";
    std::cin >> b;

    std::cout << "----Проверяем---- \n";

    if (a > b) {
        std::cout << b;
    } else if (a < b) {
        std::cout << a;
    } else {
        std::cout << "Числа равны";
    }

}