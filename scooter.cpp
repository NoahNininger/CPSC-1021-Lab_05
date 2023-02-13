#include "scooter.h"

// Mutators
void Scooter::setMake(std::string mk) 
    { make = mk; }
void Scooter::setModel(std::string mdl) 
    { model = mdl; }
void Scooter::setYear(std::string y) 
    { year = y; }
void Scooter::setIsElectric(std::string e) 
    { isElectric = e; }
void Scooter::setColor(std::string c) 
    { color = c; }

// Accessors
std::string Scooter::getMake() 
    { return make; }
std::string Scooter::getModel() 
    { return model; }
std::string Scooter::getYear() 
    { return year; }
std::string Scooter::getIsElectric() 
    { return isElectric; }
std::string Scooter::getColor() 
    { return color; }