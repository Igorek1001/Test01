#include <iostream>
#include <locale.h>


int main9() {
    setlocale(LC_ALL, "Russian");
    std::cout << "********** ������������� ����� **********\n\n";
    int profit;
    std::cout << "������� ������ �������: ";
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
        std::cout << "������ �� ����������?\n";
    }
    
    tax += profit * 13 / 100;

    if (profit < 0) {
        std::cout << "������! ������������� �����!\n";
    }
    else {
        std::cout << "��������� ��������� ����� � �������: " << tax << " ������\n";
        return 0;
        // ��� ����� else, ��������� ����� �������� ����� ������ ���� ��� ������������� �����
        }
    }