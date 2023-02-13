#ifndef LOW_EMISSION_H_
#define LOW_EMISSION_H_

#include <string>

class LowEmission
{
    private:
        std::string make, model, year,
                    isHybrid, batterySize; // class-specific member variables
    public:
        LowEmission() = default;        // default constructor

        void setMake(std::string);
        void setModel(std::string);
        void setYear(std::string);
        void setIsHybrid(std::string);      // class-specific
        void setBatterySize(std::string);

        std::string getMake();
        std::string getModel();
        std::string getYear();
        std::string getIsHybrid();          // class-specific
        std::string getBatterySize();
};

#endif
