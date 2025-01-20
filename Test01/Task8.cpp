#include <iostream>
#include <locale.h>


int main8() {
    setlocale(LC_ALL, "Russian");
    std::cout << "********** Зарплата **********\n\n";
    int aCooperator;
    int bCooperator;
    int cCooperator;
    std::cout << "Введите зарплату первого сотрудника: ";
    std::cin >> aCooperator;
    std::cout << "Введите зарплату второго сотрудника: ";
    std::cin >> bCooperator;
    std::cout << "Введите зарплату третьего сотрудника: ";
    std::cin >> cCooperator;
    std::cout << "----------Считаем---------- \n";

    int max;
    if (aCooperator >= bCooperator && aCooperator >= cCooperator) {
        std::cout << "Самая высокая зарплата в отделе: " << aCooperator;
        max = aCooperator;
    }
    else if (bCooperator >= aCooperator && bCooperator >= cCooperator) {
        std::cout << "Самая высокая зарплата в отделе: " << bCooperator;
        max = bCooperator;
    }
    else if (cCooperator >= aCooperator && cCooperator >= bCooperator) {
        std::cout << "Самая высокая зарплата в отделе: " << cCooperator;
        max = cCooperator;
    }
    std::cout << "\n";
    int min;
    if (aCooperator <= bCooperator && aCooperator <= cCooperator) {
        min = aCooperator;
    }
    else if (bCooperator <= aCooperator && bCooperator <= cCooperator) {
        min = bCooperator;
    }
    else if (cCooperator <= aCooperator && cCooperator <= bCooperator) {
        min = cCooperator;
    }
    int differenceBetweenHighAndLow = max - min;
    std::cout << "Разница между самой высокой и самой низкой зарплатой в отделе: " << differenceBetweenHighAndLow << "\n";

    int averageSalary = (aCooperator + bCooperator + cCooperator) / 3;
    std::cout << "Средняя зарплата в отделе: " << averageSalary << "\n";

    return 0;
}