#include <iostream>
#include <locale.h>


int main2() {
    setlocale(LC_ALL, "Russian");
    std::cout << "�������� ��� �� ����������� � ��� \n";
    int a;
    int b;
    int d;
    std::cout << "������� ������ �����: ";
    std::cin >> a;
    std::cout << "������� ������ �����: ";
    std::cin >> b;
    int c = a + b;
    std::cout << "������� �� �����: ";
    std::cin >> d;
    std::cout << "----���������---- \n";


    if (c == d) {
        std::cout << "�����!";
    } else {
        std::cout << "������! ������ ���������:" << c;
    }
    return 0;
}