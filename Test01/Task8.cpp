#include <iostream>
#include <locale.h>


int main8() {
    setlocale(LC_ALL, "Russian");
    std::cout << "********** �������� **********\n\n";
    int aCooperator;
    int bCooperator;
    int cCooperator;
    std::cout << "������� �������� ������� ����������: ";
    std::cin >> aCooperator;
    std::cout << "������� �������� ������� ����������: ";
    std::cin >> bCooperator;
    std::cout << "������� �������� �������� ����������: ";
    std::cin >> cCooperator;
    std::cout << "----------�������---------- \n";

    int max;
    if (aCooperator >= bCooperator && aCooperator >= cCooperator) {
        std::cout << "����� ������� �������� � ������: " << aCooperator;
        max = aCooperator;
    }
    else if (bCooperator >= aCooperator && bCooperator >= cCooperator) {
        std::cout << "����� ������� �������� � ������: " << bCooperator;
        max = bCooperator;
    }
    else if (cCooperator >= aCooperator && cCooperator >= bCooperator) {
        std::cout << "����� ������� �������� � ������: " << cCooperator;
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
    std::cout << "������� ����� ����� ������� � ����� ������ ��������� � ������: " << differenceBetweenHighAndLow << "\n";

    int averageSalary = (aCooperator + bCooperator + cCooperator) / 3;
    std::cout << "������� �������� � ������: " << averageSalary << "\n";

    return 0;
}