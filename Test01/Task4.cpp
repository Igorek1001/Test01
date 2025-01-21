#include <iostream>
#include <locale.h>


int main4() {
    setlocale(LC_ALL, "Russian");
    std::cout << "Определим уровень персонажа в компьютерной игре \n\n";
    int experience;
    int level = 1;
    std::cout << "Введите количество опыта: ";
    std::cin >> experience;
    std::cout << "-----Считаем----- \n\n";


    if (experience >= 8500) {
        level += 3;
        std::cout << "Ваш уровень: " << level; 
        // Значит, что при получении 8500 опыта, система сначала заберет -1000 (+1 level), 
        // затем -2500 (+1 level), затем -5000 (+1 level), а далее предел уровня (4 level).
    }
    else if (experience >= 3500) {
        level += 2;
        std::cout << "Ваш уровень: " << level;
    } 
    else if (experience >= 1000) {
        level += 1;
        std::cout << "Ваш уровень: " << level;
    } 
    else if (experience < 0) {
        std::cout << "Ввод отрицательного числа";
    }
    else {
        std::cout << "Ваш уровень остался прежним: " << level;
    }

    return 0;
}