#ifndef CPP_CONTACT_HPP
#define CPP_CONTACT_HPP

#include <cstddef>
#include <string>
#include <iostream>
#include <iomanip>

class Contact {
private:
	size_t	_index;
	static std::string _dataNames[5];

	static bool isDigit(const std::string& str) ;
public:
	std::string _dataSet[5];
	Contact();
	~Contact();

	bool setData(size_t index);
	void getData() const;
	void showInfo() const;

};

#endif //CPP_CONTACT_HPP
