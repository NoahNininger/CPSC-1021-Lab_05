#ifndef VISITOR_H_
#define VISITOR_H_

#include <string>

class Visitor 
{
	private:
		std::string name, address, email,
					isParent, isSibling;	// class-specific member variables
	public:
		Visitor() = default;		// default constructor

		void setName(std::string);
		void setAddress(std::string);
		void setEmail(std::string);
		void setIsParent(std::string);		// class specific
		void setIsSibling(std::string);

		std::string getName();
		std::string getAddress();
		std::string getEmail();
		std::string getIsParent();			// class specific
		std::string getIsSibling();
};

#endif