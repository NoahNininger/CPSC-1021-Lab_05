#include <iostream>
#include <iomanip>

#include "Invoice.h"

double Invoice::calcTotalCost(int p1, int p2)
{
    switch (p2)
    {
        case 1:
            totalCost = p1 - 25.00;  // $25 off for annual permits
            break;
        case 2:
            totalCost = p1 - 10.00;  // $10 off for semester-long permits
            break;
        case 3:
            totalCost = p1 - 2.00;   // $2 off for one-day permits
            break;
        case 4:
            totalCost = p1 - 5.00;   // $5 off for Park'n'Ride permits
            break;
    }

 // returns the total cost -- (permit type - discount) + service charge of $2.50
    return totalCost + 2.50;
}

void Invoice::printInfo(std::string n, std::string a, std::string e, 
                        std::string p1, std::string p2, std::string mk, 
                        std::string mdl, std::string y, std::string v1, 
                        std::string v2, int person, int vehicle)
{
 // prints name, address, & email (all in common w/ type of person)
    std::cout << "INVOICE:" << std::endl      
              << "---------------------------" << std::endl
              << "Name: " << n << std::endl
              << "Address: " << a << std::endl
              << "Email: " << e << std::endl;
    switch (person)
    {
        case 1:     // prints out person-specific info for employees
            std::cout << "Employee ID: " << p1 << std::endl
                      << "Occupation: " << p2 << std::endl;
            break;
        case 2:     // prints out person-specific info for students
            std::cout << "Student ID: " << p1 << std::endl   
                      << "Living On / Off-Campus? " << p2 << std::endl;
            break;
        case 3:     // prints out person-specific info for visitors
            std::cout << "Parent of Student? " << p1 << std::endl  
                      << "Sibling of Student? " << p2 << std::endl;
            break;
        case 4:     // prints out person-specific info for vendors
            std::cout << "Company Name: " << p1 << std::endl  
                      << "Number of Employees: " << p2 << std::endl;
            break;
    }

 // prints make, model, & year (all in common w/ type of vehicle)
    std::cout << std::endl << "VEHICLE" << std::endl       
                           << "Make: " << mk << std::endl
                           << "Model: " << mdl << std::endl
                           << "Year: " << y << std::endl;
    switch (vehicle)
    {
        case 1:     // prints out vehicle-specific info for regular cars
            std::cout << "Sedan? " << v1 << std::endl 
                      << "License Plate Number: " << v2 << std::endl;
            break;
        case 2:    // prints out vehicle-specific info for low-emission vehicles
            std::cout << "Battery Size: " << v1 << std::endl    
                      << "Hybrid?: " << v2 << std::endl;
            break;
        case 3:     // prints out vehicle-specific info for motorcycles
            std::cout << "Number of Wheels: " << v1 << std::endl  
                      << "Sport Bike? " << v2 << std::endl;
            break;
        case 4:     // prints out vehicle-specific info for scooters
            std::cout << "Electric / Gas: " << v1 << std::endl   
                      << "Color: " << v2 << std::endl;
            break;
    }

 // prints the total cost
    std::cout << std::endl << std::fixed << std::showpoint << 
    std::setprecision(2) << "Total Cost: " << totalCost << std::endl; 
}