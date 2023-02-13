#include "Vendor.h"

// Mutators
void Vendor::setName(std::string n) 
	{ name = n; }
void Vendor::setAddress(std::string a) 
	{ address = a; }
void Vendor::setEmail(std::string e) 
	{ email = e; }
void Vendor::setCompanyName(std::string cN) 
	{ companyName = cN; }
void Vendor::setNumEmployees(std::string nE) 
	{ numEmployees = nE; }

// Accessors
std::string Vendor::getName() 
	{ return name; }
std::string Vendor::getAddress() 
	{ return address; }
std::string Vendor::getEmail() 
	{ return email; }
std::string Vendor::getCompanyName() 
	{ return companyName; }
std::string Vendor::getNumEmployees() 
	{ return numEmployees; }