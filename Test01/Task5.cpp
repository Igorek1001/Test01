#include <iostream>
#include <locale.h>


int main5() {
    setlocale(LC_ALL, "Russian");
    std::cout << "��������, ������� �� ���� ����� �� ������ ��� ������� \n\n";
    int a;
    int b;
    std::cout << "������� ������ �����: ";
    std::cin >> a;
    std::cout << "������� ������ �����: ";
    std::cin >> b;

    std::cout << "----���������---- \n\n";

    if (a % b == 0) {
        std::cout << "��, " << a << " ������� �� " << b << " ��� �������!\n";
    } else if (a % b != 0) {
        std::cout << "���, " << a << " �� ������� �� " << b << " ��� �������!\n";
    } 
    return 0;
}