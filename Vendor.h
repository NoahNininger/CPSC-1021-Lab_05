#ifndef VENDOR_H_
#define VENDOR_H_

#include <string>

class Vendor 
{
	private:
		std::string name, address, email,
					companyName, numEmployees;// class-specific member variables	
	public:
		Vendor() = default;		// default constructor

		void setName(std::string);
		void setAddress(std::string);
		void setEmail(std::string);
		void setCompanyName(std::string);		// class specific
		void setNumEmployees(std::string);

		std::string getName();
		std::string getAddress();
		std::string getEmail();
		std::string getCompanyName();			// class specific
		std::string getNumEmployees();
};

#endif