#include "employee.h"

//Mutators
void Employee::setName(std::string n)
    { name = n; }
void Employee::setAddress(std::string a)
    { address = a; }
void Employee::setEmail(std::string e)
    { email = e; }
void Employee::setEmployeeID(std::string eID)
    { employeeID = eID; }
void Employee::setOccupation(std::string o)
    { occupation = o; }

//Accessors
std::string Employee::getName()
    { return name; }
std::string Employee::getAddress()
    { return address; }
std::string Employee::getEmail()
    { return email; }
std::string Employee::getEmployeeID()
    { return employeeID; }
std::string Employee::getOccupation()
    { return occupation; }