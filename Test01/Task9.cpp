#include <iostream>
#include <locale.h>


int main9() {
    setlocale(LC_ALL, "Russian");
    std::cout << "********** ������������� ����� **********\n\n";
    int profit;
    std::cout << "������� ������ �������: ";
    std::cin >> profit;
    int profitWithFutureTax;

    if (profit > 50000) {
        profitWithFutureTax = profit - 50000;
        int tax = profitWithFutureTax * 30 / 100;
        std::cout << "������ ������ (30%) �����: " << tax << "\n";
    }
    else if (profit >= 10000) {
        profitWithFutureTax = profit - 10000;
        int tax = profitWithFutureTax * 20 / 100;
        std::cout << "������ ������ (20%) �����: " << tax << "\n";
    }
    else if (profit > 0) {
        int tax = profit * 13 / 100;
        std::cout << "������ ������ (13%) �����: " << tax << "\n";
    }
    else if (profit == 0) {
        std::cout << "������ �� ����������?\n";
    }
    else {
        std::cout << "������������� �����?\n";
    }
}