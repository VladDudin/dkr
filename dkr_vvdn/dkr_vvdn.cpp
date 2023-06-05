#include <iostream>
#include "airline.h"
#include "airlines.h"
#include "logger.h"

int main() {
    // створюємо логер
    Logger logger("log.txt");

    // створюємо базу авіаліній
    Airlines airlines;

    // створюємо та додаємо об'єкти Airline
    std::vector<std::string> days1 = { "Monday", "Wednesday", "Friday" };
    Airline airline1("Kiev", 123, "Boeing", "12:00", days1);
    airlines.addAirline(airline1);
    logger.log("Created and added airline1: " + airline1.toString());

    std::vector<std::string> days2 = { "Tuesday", "Thursday", "Saturday" };
    Airline airline2("London", 456, "Airbus", "16:00", days2);
    airlines.addAirline(airline2);
    logger.log("Created and added airline2: " + airline2.toString());

    // виводимо списки рейсів за різними критеріями
    std::cout << "Flights to Kiev:" << std::endl;
    airlines.printByDestination("Kiev");

    std::cout << "Flights on Monday:" << std::endl;
    airlines.printByDay("Monday");

    std::cout << "Flights on Wednesday after 12:00:" << std::endl;
    airlines.printByDayAndTime("Wednesday", "12:00");

    std::ofstream file("airlines.txt");
    if (file.is_open()) {
        for (const Airline& airline : airlines.getAirlines()) {
            std::string line = airline.toString();
            // Просте XOR шифрування
            for (char& c : line) {
                c ^= 123;
            }
            file << line << std::endl;
        }
        file.close();
    }

    return 0;
}