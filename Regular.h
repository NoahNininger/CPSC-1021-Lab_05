#ifndef REGULAR_H_
#define REGULAR_H_

#include <string>

class Regular 
{
    private:
        std::string make, model, year,
                    isSedan, licensePlate;  // class-specific member variables
    public:
        Regular() = default;            // default constructor

        void setMake(std::string);
        void setModel(std::string);
        void setYear(std::string);
        void setIsSedan(std::string);           // class specific
        void setLicensePlate(std::string);

        std::string getMake();
        std::string getModel();
        std::string getYear();
        std::string getIsSudan();               // class specific
        std::string getLicencePlate();
};

#endif