#include <iostream>
#include <locale.h>


int main4() {
    setlocale(LC_ALL, "Russian");
    std::cout << "��������� ������� ��������� � ������������ ���� \n\n";
    int experience;
    int level = 1;
    std::cout << "������� ���������� �����: ";
    std::cin >> experience;
    std::cout << "-----�������----- \n\n";


    if (experience >= 8500) {
        level += 3;
        std::cout << "��� �������: " << level; 
        // ������, ��� ��� ��������� 8500 �����, ������� ������� ������� -1000 (+1 level), 
        // ����� -2500 (+1 level), ����� -5000 (+1 level), � ����� ������ ������ (4 level).
    }
    else if (experience >= 3500) {
        level += 2;
        std::cout << "��� �������: " << level;
    } 
    else if (experience >= 1000) {
        level += 1;
        std::cout << "��� �������: " << level;
    } 
    else if (experience < 0) {
        std::cout << "���� �������������� �����";
    }
    else {
        std::cout << "��� ������� ������� �������: " << level;
    }

    return 0;
}