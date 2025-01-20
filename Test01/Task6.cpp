#include <iostream>
#include <locale.h>


int main6() {
    setlocale(LC_ALL, "Russian");
    std::cout << "********** Барбершоп-калькулятор **********\n\n";
    int menInCity;
    int haveBarbers;
    int workBarberOneDay = 8;
    std::cout << "Сколько мужчин проживает в городе: ";
    std::cin >> menInCity;
    std::cout << "Сколько всего барберов уже работает во всех барбершопах: ";
    std::cin >> haveBarbers;

    std::cout << "----------Вычисляем---------- \n\n";
    int menBarberOneMonth = 30 * workBarberOneDay;
    std::cout << "Один барбер стрижет " << menBarberOneMonth << " клиентов в месяц\n";
    std::cout << haveBarbers << " барбера могут постричь " << haveBarbers * menBarberOneMonth << " мужчин за месяц\n";
    
    int needBarbers = menInCity / menBarberOneMonth;
    if (menInCity % (needBarbers * menBarberOneMonth) == 0) {
        std::cout << "Необходимо барберов: " << needBarbers << " для стрижки " << menInCity << " мужчин за месяц\n";
    } else {
        std::cout << "Необходимо барберов: " << needBarbers + 1 << " для стрижки " << menInCity << " мужчин за месяц\n";
        needBarbers += 1;
    }

    if (needBarbers > haveBarbers) {
        std::cout << "Барберов недостаточно\n";
    } else if (needBarbers < haveBarbers) {
        std::cout << "Барберов достаточно\n";
    } else {
        std::cout << "Барберов ровно столько, сколько необходимо\n";
    }
    return 0;
}