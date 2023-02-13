#include "Regular.h"

//Mutators
void Regular::setMake(std::string mk)
    { make = mk; }
void Regular::setModel(std::string md)
    { model = md; }
void Regular::setYear(std::string y)
    { year = y; }
void Regular::setIsSedan(std::string is)
    { isSedan = is; }
void Regular::setLicensePlate(std::string lp)
    { licensePlate = lp; }

//Accessors
std::string Regular::getMake() 
    { return make; }
std::string Regular::getModel() 
    { return model; }
std::string Regular::getYear() 
    { return year; }
std::string Regular::getIsSudan() 
    { return isSedan; }
std::string Regular::getLicencePlate() 
    { return licensePlate; }