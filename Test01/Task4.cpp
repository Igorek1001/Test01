#include <iostream>
#include <locale.h>


int main4() {
    setlocale(LC_ALL, "Russian");
    std::cout << "��������� ������� ��������� � ������������ ���� \n\n";
    int experience;
    int level = 1;
    std::cout << "������� ���������� �����: ";
    std::cin >> experience;
    std::cout << "-----�������----- \n";


    if (experience - 1000 >= 0) {
        experience -= 1000;
        level += 1;
        if (experience - 2500 >= 0) {
        experience -= 2500;
        level += 1;
            } if (experience - 5000 >= 0) {
            experience -= 5000;
            level += 1;
            } 
    } else {
        std::cout << level;
    }
    std::cout << "��� �������: " << level;
    return 0;
}