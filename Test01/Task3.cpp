#include <iostream>
#include <locale.h>


int main3() {
    setlocale(LC_ALL, "Russian");
    std::cout << "�������� ������ �� ����� \n";
    int a;
    std::cout << "������� �����: ";
    std::cin >> a;
    std::cout << "----���������---- \n";


    if (a % 2 == 0) {
        std::cout << "����� " << a << " - ������";
    }
    else {
        std::cout << "����� " << a << " - ��������";
    }
    return 0;
}