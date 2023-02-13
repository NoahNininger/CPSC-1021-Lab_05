#include "Visitor.h"

// Mutators
void Visitor::setName(std::string n) 
	{ name = n; }
void Visitor::setAddress(std::string a) 
	{ address = a; }
void Visitor::setEmail(std::string e) 
	{ email = e; }
void Visitor::setIsParent(std::string isP) 
	{ isParent = isP; }
void Visitor::setIsSibling(std::string isS) 
	{ isSibling = isS; }

// Accessors
std::string Visitor::getName() 
	{ return name; }
std::string Visitor::getAddress()
	{ return address; }
std::string Visitor::getEmail() 
	{ return email; }
std::string Visitor::getIsParent() 
	{ return isParent; }
std::string Visitor::getIsSibling() 
	{ return isSibling; }