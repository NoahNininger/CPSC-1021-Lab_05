#ifndef MOTORCYCLE_H
#define MOTORCYCLE_H

#include <string>

class Motorcycle 
{
    private:
        std::string make, model, year,
                    numWheels, isSportBike;  // class-specific member variables
    public:
        Motorcycle() = default;     // default constrcutor

        void setMake(std::string);
        void setModel(std::string);
        void setYear(std::string);
        void setNumWheels(std::string);     // class specific
        void setIsSportBike(std::string);

        std::string getMake();
        std::string getModel();
        std::string getYear();
        std::string getNumWheels();         // class specific
        std::string getIsSportBike();
};

#endif  