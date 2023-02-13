#ifndef SCOOTER_H
#define SCOOTER_H

#include <string>

class Scooter 
{
    private:
        std::string make, model, year,
                    isElectric, color;  // class-specific member variables
    public:
        Scooter() = default;        // default constructor

        void setMake(std::string);
        void setModel(std::string);
        void setYear(std::string);
        void setIsElectric(std::string);        // class specific
        void setColor(std::string);

        std::string getMake();  
        std::string getModel(); 
        std::string getYear();
        std::string getIsElectric();            // class specific
        std::string getColor();
};

#endif  