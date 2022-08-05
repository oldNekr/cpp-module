//
// Created by Lauri Rosby on 7/23/22.
//

#ifndef CPP_MODULE_FIXED_HPP
#define CPP_MODULE_FIXED_HPP

#include <iostream>

class Fixed {
private:
	int _nbr;
	static const int _bits = 8;

public:
	Fixed();
	~Fixed();

	Fixed(Fixed const &src); // Конструктор копирования
	Fixed & operator = (Fixed const &cp); // Перегрузка оператора присваивания =

	int getRawBits() const;
	void setRawBits(int const raw);

};


#endif //CPP_MODULE_FIXED_HPP
