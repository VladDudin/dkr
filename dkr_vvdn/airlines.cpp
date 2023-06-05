#include <iostream>
#include "airlines.h"

Airlines::Airlines() { }

void Airlines::addAirline(const Airline& airline) {
    m_airlines.push_back(airline);
}

void Airlines::printByDestination(const std::string& destination) const {
    for (const auto& airline : m_airlines) {
        if (airline.getDestination() == destination) {
            std::cout << airline << std::endl;
        }
    }
}

void Airlines::printByDay(const std::string& day) const {
    for (const auto& airline : m_airlines) {
        auto daysOfWeek = airline.getDaysOfWeek();
        if (std::find(daysOfWeek.begin(), daysOfWeek.end(), day) != daysOfWeek.end()) {
            std::cout << airline << std::endl;
        }
    }
}

void Airlines::printByDayAndTime(const std::string& day, const std::string& time) const {
    for (const auto& airline : m_airlines) {
        auto daysOfWeek = airline.getDaysOfWeek();
        if (std::find(daysOfWeek.begin(), daysOfWeek.end(), day) != daysOfWeek.end() && airline.getDepartureTime() > time) {
            std::cout << airline << std::endl;
        }
    }
}

const std::vector<Airline>& Airlines::getAirlines() const {
    return m_airlines;
}