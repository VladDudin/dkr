#ifndef AIRLINE_H
#define AIRLINE_H

#include <string>
#include <vector>

class Airline {
public:
    Airline(const std::string& destination, int flightNumber, const std::string& planeType,
        const std::string& departureTime, const std::vector<std::string>& daysOfWeek);
    std::string toString() const;

    // getters
    std::string getDestination() const;
    int getFlightNumber() const;
    std::string getPlaneType() const;
    std::string getDepartureTime() const;
    std::vector<std::string> getDaysOfWeek() const;

    // setters
    void setDestination(const std::string& destination);
    void setFlightNumber(int flightNumber);
    void setPlaneType(const std::string& planeType);
    void setDepartureTime(const std::string& departureTime);
    void setDaysOfWeek(const std::vector<std::string>& daysOfWeek);

private:
    std::string m_destination;
    int m_flightNumber;
    std::string m_planeType;
    std::string m_departureTime;
    std::vector<std::string> m_daysOfWeek;
};

std::ostream& operator<<(std::ostream& out, const Airline& airline);

#endif // AIRLINE_H