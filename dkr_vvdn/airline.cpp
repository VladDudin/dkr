#include "airline.h"
#include <iostream>

// конструктор
Airline::Airline(const std::string& destination, int flightNumber, const std::string& planeType,
    const std::string& departureTime, const std::vector<std::string>& daysOfWeek)
    : m_destination(destination), m_flightNumber(flightNumber), m_planeType(planeType),
    m_departureTime(departureTime), m_daysOfWeek(daysOfWeek)
{ }

std::string Airline::toString() const {
    std::string days;
    for (const auto& day : m_daysOfWeek) {
        days += day + " ";
    }

    return "Destination: " + m_destination + ", Flight Number: " + std::to_string(m_flightNumber) +
        ", Aircraft Type: " + m_planeType + ", Departure Time: " + m_departureTime + ", Days of Week: " + days;
}

// getters
std::string Airline::getDestination() const { return m_destination; }
int Airline::getFlightNumber() const { return m_flightNumber; }
std::string Airline::getPlaneType() const { return m_planeType; }
std::string Airline::getDepartureTime() const { return m_departureTime; }
std::vector<std::string> Airline::getDaysOfWeek() const { return m_daysOfWeek; }

// setters
void Airline::setDestination(const std::string& destination) { m_destination = destination; }
void Airline::setFlightNumber(int flightNumber) { m_flightNumber = flightNumber; }
void Airline::setPlaneType(const std::string& planeType) { m_planeType = planeType; }
void Airline::setDepartureTime(const std::string& departureTime) { m_departureTime = departureTime; }
void Airline::setDaysOfWeek(const std::vector<std::string>& daysOfWeek) { m_daysOfWeek = daysOfWeek; }

std::ostream& operator<<(std::ostream& out, const Airline& airline) {
    std::cout << "Destination: " << airline.getDestination()
        << ", Flight Number: " << airline.getFlightNumber()
        << ", Aircraft Type: " << airline.getFlightNumber()
        << ", Departure Time: " << airline.getDepartureTime()
        << ", Days of Week: ";

    for (const auto& day : airline.getDaysOfWeek()) {
        out << day << " ";
    }

    return out;
}