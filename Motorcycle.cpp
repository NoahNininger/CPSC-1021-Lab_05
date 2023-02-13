#include "Motorcycle.h"

// Mutators
void Motorcycle::setMake(std::string mk) 
    { make = mk; }
void Motorcycle::setModel(std::string mdl) 
    { model = mdl; }
void Motorcycle::setYear(std::string y) 
    { year = y; }
void Motorcycle::setNumWheels(std::string n) 
    { numWheels = n; }
void Motorcycle::setIsSportBike(std::string s) 
    { isSportBike = s; }

// Accessors
std::string Motorcycle::getMake() 
    { return make; }
std::string Motorcycle::getModel() 
    { return model; }
std::string Motorcycle::getYear() 
    { return year; }
std::string Motorcycle::getNumWheels() 
    { return numWheels; }
std::string Motorcycle::getIsSportBike() 
    { return isSportBike; }