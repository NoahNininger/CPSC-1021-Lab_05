#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include <string>

class Employee
{
    private:
        std::string name, address, email,
                    employeeID, occupation; // class-specific member variables
    public:
        Employee() = default;       // default constructor
    
        void setName(std::string);
        void setAddress(std::string);
        void setEmail(std::string);
        void setEmployeeID(std::string);        // class specific
        void setOccupation(std::string);

        std::string getName();
        std::string getAddress();
        std::string getEmail();
        std::string getEmployeeID();            // class-specific
        std::string getOccupation();   
};

#endif