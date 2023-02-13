#include "Student.h"

// Mutators
void Student::setName(std::string n)
    { name = n; }
void Student::setAddress(std::string a)
    { address = a; }
void Student::setEmail(std::string e)
    { email = e; }
void Student::setStudentID(std::string sID)
    { studentID = sID; }
void Student::setCampus(std::string c)
    { campus = c; }

// Accessors
std::string Student::getName()
    { return name; }
std::string Student::getAddress()
    { return address; }
std::string Student::getEmail()
    { return email; }
std::string Student::getStudentID()
    { return studentID; }
std::string Student::getCampus()
    { return campus; }