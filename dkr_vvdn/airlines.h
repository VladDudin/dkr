#ifndef AIRLINES_H
#define AIRLINES_H

#include <vector>
#include "airline.h"

class Airlines {
public:
    Airlines();
    void addAirline(const Airline& airline);
    void printByDestination(const std::string& destination) const;
    void printByDay(const std::string& day) const;
    void printByDayAndTime(const std::string& day, const std::string& time) const;
    const std::vector<Airline>& getAirlines() const;

private:
    std::vector<Airline> m_airlines;
};

#endif // AIRLINES_H