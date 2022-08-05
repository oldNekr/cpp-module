//
// Created by Lauri Rosby on 7/23/22.
//

#ifndef CPP_MODULE_FIXED_HPP
#define CPP_MODULE_FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
private:
	int _nbr;
	static const int _bits = 8;

public:
	Fixed();
	~Fixed();

	Fixed(Fixed const &src); // Конструктор копирования
	Fixed & operator = (Fixed const &cp); // Перегрузка оператора присваивания =
	Fixed(int const &src);
	Fixed(float const &src);

	int getRawBits() const;
	void setRawBits(int const raw);

	int toInt() const;
	float toFloat() const;

};

std::ostream & operator << (std::ostream & out, Fixed const &fixed);


#endif //CPP_MODULE_FIXED_HPP
