#include <iostream>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int choose = 0;

    std::cout << "Выберите задание (1-3): ";
    std::cin >> choose;
    if (choose == 1) {
        double S = 0, time = 0;
        std::cout << "\nВведите расстояние до аэропорта в километрах: ";
        std::cin >> S;
        std::cout << "\nВведите предпочтительное время в пути в часах: ";
        std::cin >> time;
        std::cout << "\nСкорость, с которой вам нужно ехать равняется " << S/time << " километра в час";

    }

    else if (choose == 2) {
        double total_time = 0, hour_start = 0, hour_end = 0;
        double minute_start = 0, minute_end = 0;
        double sec_start = 0, sec_end = 0;
        std::cout << "\nВведите время начала поездки часы, минуты, секунды: ";
        std::cin >> hour_start >> minute_start >> sec_start;
        
        std::cout << "\nВведите время конца поездки часы, минуты, секунды: ";
        std::cin >> hour_end >> minute_end >> sec_end;

        total_time = ((hour_end * 3600 + minute_end * 60 + sec_end) - (hour_start * 3600 + minute_start * 60 + sec_start)) / 60.0;

        std::cout << "\nИтоговая стоимость поездки (2 гривны за минуту): " << total_time * 2;

    }

    else if (choose == 3) {
        double price1 = 0, price2 = 0, price3 = 0;
        double S = 0, fuel_consumption = 0, fuel_trip = 0;

        std::cout << "\nВведите расстояние в км: ";
        std::cin >> S;
        std::cout << "\nВведите расход бензина на 100 км: ";
        std::cin >> fuel_consumption;
        std::cout << "\nВведите стоимость 3 видов бензина: ";
        std::cin >> price1 >> price2 >> price3;

        fuel_trip = (S / 100.0) * fuel_consumption;

        std::cout << "|    Бензин-1    ---->  " << fuel_trip * price1 << " руб.  |\n";
        std::cout << "|    Бензин-2    ---->  " << fuel_trip * price2 << " руб.  |\n";
        std::cout << "|    Бензин-3    ---->  " << fuel_trip * price3 << " руб.  |\n";
    }
    
    return 0;
}
