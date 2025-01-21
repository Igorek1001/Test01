#include <iostream>
#include <locale.h>


int main9() {
    setlocale(LC_ALL, "Russian");
    std::cout << "********** Прогрессивный налог **********\n\n";
    int profit;
    std::cout << "Введите размер прибыли: ";
    std::cin >> profit;

    int tax = 0;
    if (profit > 50000) {
        tax += (profit - 50000) * 30 / 100;
        profit = 50000;
    }
    if (profit >= 10000) {
        tax += (profit - 10000) * 20 / 100;
        profit = 10000;
    }
    if (profit == 0) {
        std::cout << "Ничего не заработали?\n";
    }
    
    tax += profit * 13 / 100;

    if (profit < 0) {
        std::cout << "Ошибка! Отрицательное число!\n";
    }
    else {
        std::cout << "Требуется заплатить налог в размере: " << tax << " рублей\n";
        return 0;
        // Без этого else, программа будет выводить сумму налога даже при отрицательном числе
        }
    }