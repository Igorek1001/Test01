#include <iostream>
#include <locale.h>


int main9() {
    setlocale(LC_ALL, "Russian");
    std::cout << "********** Прогрессивный налог **********\n\n";
    int profit;
    std::cout << "Введите размер прибыли: ";
    std::cin >> profit;
    int profitWithFutureTax;

    if (profit > 50000) {
        profitWithFutureTax = profit - 50000;
        int tax = profitWithFutureTax * 30 / 100;
        std::cout << "Размер налога (30%) равен: " << tax << "\n";
    }
    else if (profit >= 10000) {
        profitWithFutureTax = profit - 10000;
        int tax = profitWithFutureTax * 20 / 100;
        std::cout << "Размер налога (20%) равен: " << tax << "\n";
    }
    else if (profit > 0) {
        int tax = profit * 13 / 100;
        std::cout << "Размер налога (13%) равен: " << tax << "\n";
    }
    else if (profit == 0) {
        std::cout << "Ничего не заработали?\n";
    }
    else {
        std::cout << "Отрицательное число?\n";
    }
}