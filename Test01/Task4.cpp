#include <iostream>
#include <locale.h>


int main4() {
    setlocale(LC_ALL, "Russian");
    std::cout << "ќпределим уровень персонажа в компьютерной игре \n\n";
    int experience;
    int level = 1;
    std::cout << "¬ведите количество опыта: ";
    std::cin >> experience;
    std::cout << "-----—читаем----- \n";


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
    std::cout << "¬аш уровень: " << level;
    return 0;
}