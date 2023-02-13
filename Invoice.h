#ifndef INVOICE_H_
#define INVOICE_H_

#include <string>

class Invoice
{
    private:
        double totalCost;       // member variable for the total cost
    public:
        double calcTotalCost(int, int);
        void printInfo(std::string, std::string, std::string, std::string, 
                       std::string, std::string, std::string, std::string, 
                       std::string, std::string, int, int);
};

#endif