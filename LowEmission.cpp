#include "LowEmission.h"

//Mutators
void LowEmission::setMake(std::string mk)
    { make = mk; }
void LowEmission::setModel(std::string mdl)
    { model = mdl; }
void LowEmission::setYear(std::string y)
    { year = y; }
void LowEmission::setIsHybrid(std::string h)
    { isHybrid = h; }
void LowEmission::setBatterySize(std::string b)
    { batterySize = b; }

// Accessors
std::string LowEmission::getMake()
    { return make; }
std::string LowEmission::getModel()
    { return model; }
std::string LowEmission::getYear()
    { return year; }
std::string LowEmission::getIsHybrid()
    { return isHybrid; }
std::string LowEmission::getBatterySize()
    { return batterySize; }

