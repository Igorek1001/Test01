#include <iostream>
#include <locale.h>


int main6() {
    setlocale(LC_ALL, "Russian");
    std::cout << "********** ���������-����������� **********\n\n";
    int menInCity;
    int haveBarbers;
    int workBarberOneDay = 8;
    std::cout << "������� ������ ��������� � ������: ";
    std::cin >> menInCity;
    std::cout << "������� ����� �������� ��� �������� �� ���� �����������: ";
    std::cin >> haveBarbers;

    std::cout << "----------���������---------- \n\n";
    int menBarberOneMonth = 30 * workBarberOneDay;
    std::cout << "���� ������ ������� " << menBarberOneMonth << " �������� � �����\n";
    std::cout << haveBarbers << " ������� ����� �������� " << haveBarbers * menBarberOneMonth << " ������ �� �����\n";
    
    int needBarbers = menInCity / menBarberOneMonth;
    if (menInCity % (needBarbers * menBarberOneMonth) == 0) {
        std::cout << "���������� ��������: " << needBarbers << " ��� ������� " << menInCity << " ������ �� �����\n";
    } else {
        std::cout << "���������� ��������: " << needBarbers + 1 << " ��� ������� " << menInCity << " ������ �� �����\n";
        needBarbers += 1;
    }

    if (needBarbers > haveBarbers) {
        std::cout << "�������� ������������\n";
    } else if (needBarbers < haveBarbers) {
        std::cout << "�������� ����������\n";
    } else {
        std::cout << "�������� ����� �������, ������� ����������\n";
    }
    return 0;
}