#include <iostream>
#include <string>

#include "Invoice.h"

#include "employee.h"
#include "Student.h"
#include "Visitor.h"
#include "Vendor.h"

#include "Regular.h"
#include "LowEmission.h"
#include "Motorcycle.h"
#include "scooter.h"
using namespace std;

struct Permit
{
 // set prices to each pass in a struct
    double annual {200.00}, semester {100.00}, oneDay {5.00}, parkRide {50.00};
    int permitType;
};

int main()
{
    // creates variables to divide person/vehicle specific instances
    int person, vehicle;
    string name, address, email, person1, person2;  // variables for person
    string make, model, year, vehicle1, vehicle2;   // variables for vehicle

    do
    {
     // menu prompt (employee, student, visitor, vendor)
        cout << "Choose the following that best applies to you" << endl 
            << "---------------------------------------------" << endl
            << "Are you a" << endl
            << "1 - Employee" << endl
            << "2 - Student" << endl
            << "3 - Visitor" << endl
            << "4 - Vendor" << endl;
        cin >> person;

        if (person > 4 || person < 1)   // input validation
            { cout << "Invalid Input - Input MUST be between 1-4" << endl; }
    } while (person > 4 || person < 1);

    Employee employee;      // creates instances for person type
    Student student;
    Visitor visitor;
    Vendor vendor;

 // prompts user to input name, address, & email (common variables)
    cout << "Please enter the following information" << endl
         << "Name: ";
    getline (cin >> ws, name);
    cout << "Address: ";
    getline (cin >> ws, address);
    cout << "Email: ";
    getline (cin >> ws, email);

    switch (person)
    {
        case 1:     // prompts user to input person-specific info for employees
            employee.setName(name);
            employee.setAddress(address);
            employee.setEmail(email);

            cout << "Employee ID: ";
            getline (cin >> ws, person1);
            employee.setEmployeeID(person1);

            cout << "Occupation: ";
            getline (cin >> ws, person2);
            employee.setOccupation(person2);
            break;
        case 2:     // prompts user to input person-specific info for students
            student.setName(name);
            student.setAddress(address);
            student.setEmail(email);

            cout << "Student ID: ";
            getline (cin >> ws, person1);
            student.setStudentID(person1);

            cout << "Do you live on or off-campus? ";
            getline (cin >> ws, person2);
            student.setCampus(person2);
            break;
        case 3:     // prompts user to input person-specific info for visitors
            visitor.setName(name);
            visitor.setAddress(address);
            visitor.setEmail(email);

            cout << "Are you a parent of a student? ";  
            getline (cin >> ws, person1);
            visitor.setIsParent(person1);

            cout << "Are you a sibling of a student? ";
            getline (cin >> ws, person2);
            visitor.setIsSibling(person2);
            break;
        case 4:     // prompts user to input person-specific info for vendors
            vendor.setName(name);
            vendor.setAddress(address);
            vendor.setEmail(email);

            cout << "Company Name: ";  
            getline (cin >> ws, person1);
            vendor.setCompanyName(person1);

            cout << "Number of Employees: ";
            getline (cin >> ws, person2);
            vendor.setNumEmployees(person2);
            break;
    }

    do
    {
     // menu prompt (regular car, low-emission vehicle, motorcycle, scooter)
        cout << "Choose the following that best applies to you" << endl
            << "---------------------------------------------" << endl
            << "Do you drive a" << endl
            << "1 - Regular Car" << endl
            << "2 - Low-Emission Vehicle" << endl
            << "3 - Motorcycle" << endl
            << "4 - Scooter" << endl;
        cin >> vehicle;

        if (vehicle > 4 || vehicle < 1)     // input validation
            { cout << "Invalid Input - Input MUST be between 1-4" << endl; }
    } while (vehicle > 4 || vehicle < 1);

    Regular regular;                // creates instances for vehicle type
    LowEmission lowEmission;
    Motorcycle motorcycle;
    Scooter scooter;

 // prompts user to input make, model, & year (all in common w/ type of vehicle)
    cout << "Please enter the following information" << endl 
         << "Make: ";
    getline (cin >> ws, make);
    cout << "Model: ";
    getline (cin >> ws, model);
    cout << "Year: ";
    getline (cin >> ws, year);

    switch (vehicle)
    {
        case 1:     // prints out vehicle-specific info for regular cars 
            regular.setMake(make);
            regular.setModel(model);
            regular.setYear(year);

            cout << "Is your vehicle a sedan? ";  
            getline (cin >> ws, vehicle1);
            regular.setIsSedan(vehicle1);

            cout << "License Plate Number: ";
            getline (cin >> ws, vehicle2);
            regular.setLicensePlate(vehicle2);
            break;
        case 2:    // prints out vehicle-specific info for low-emission vehicles
            lowEmission.setMake(make);
            lowEmission.setModel(model);
            lowEmission.setYear(year);

            cout << "What size is your battery? "; 
            getline (cin >> ws, vehicle1);
            lowEmission.setBatterySize(vehicle1);

            cout << "Is your vehicle a hyrbid? ";
            getline (cin >> ws, vehicle2);
            lowEmission.setIsHybrid(vehicle2);
            break;
        case 3:     // prints out vehicle-specific info for motorcycles
            motorcycle.setMake(make);
            motorcycle.setModel(model);
            motorcycle.setYear(year);

            cout << "How many wheels does your motorcycle have? "; 
            getline (cin >> ws, vehicle1);
            motorcycle.setNumWheels(vehicle1);

            cout << "Is your motorcycle a sport bike? ";
            getline (cin >> ws, vehicle2);
            motorcycle.setIsSportBike(vehicle2);
            break;
        case 4:     // prints out vehicle-specific info for scooters
            scooter.setMake(make);
            scooter.setModel(model);
            scooter.setYear(year);

            cout << "Is your scooter electric or gas-powered? "; 
            getline (cin >> ws, vehicle1);
            scooter.setIsElectric(vehicle1);

            cout << "Scooter color: ";
            getline (cin >> ws, vehicle2);
            scooter.setColor(vehicle2);
            break;
    }

    Permit permit;      // creates intance of struct permit

 // menu prompt (annual, semester-long, one-day, park'n'ride)
    cout << "Which parking permit would you like to purchase?" << endl   
         << "------------------------------------------------" << endl
         << "1 - Annual" << endl
         << "2 - Semester-Long" << endl
         << "3 - One-Day" << endl
         << "4 - Park'n'Ride" << endl;
    cin >> permit.permitType;

    Invoice invoice;        // creates instance if class Invoice

 // determines total cost (w/ discount) based on permit type
    switch (permit.permitType)
    {
        case 1:
            invoice.calcTotalCost(permit.annual, permit.permitType);
            break;
        case 2:
            invoice.calcTotalCost(permit.semester, permit.permitType);
            break;
        case 3:
            invoice.calcTotalCost(permit.oneDay, permit.permitType);
            break;
        case 4:
            invoice.calcTotalCost(permit.parkRide, permit.permitType);
            break;
    }

    invoice.printInfo(name, address, email, person1, person2, make, model, year,
                      vehicle1, vehicle2, person, vehicle);      // prints info

    return 0;
}