#include <iostream>
#include <locale.h>


int main1() {
    setlocale(LC_ALL, "Russian");
    std::cout << "������ ����������� �������� �� ���� �����\n";
    int a;
    int b;
    std::cout << "������� ������ �����: ";
    std::cin >> a;
    std::cout << "������� ������ �����: ";
    std::cin >> b;

    std::cout << "----���������---- \n";

    if (a > b) {
        std::cout << b;
    }
    else if (a < b) {
        std::cout << a;
    }
    else {
        std::cout << "����� �����";
    }
    return 0;
}