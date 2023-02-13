#ifndef STUDENT_H_
#define STUDENT_H_

#include <string>

class Student
{
    private:
        std::string name, address, email,
                    studentID, campus;  // class-specific member variables
    public:
        Student() = default;        // default constructor
        void setName(std::string);
        void setAddress(std::string);
        void setEmail(std::string);
        void setStudentID(std::string);      // class-specific
        void setCampus(std::string);

        std::string getName();
        std::string getAddress();
        std::string getEmail();
        std::string getStudentID();         // class-specific
        std::string getCampus();
};

#endif