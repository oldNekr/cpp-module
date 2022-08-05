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

	bool operator > (Fixed const &src) const;
	bool operator < (Fixed const &src) const;
	bool operator >= (Fixed const &src) const;
	bool operator <= (Fixed const &src) const;
	bool operator == (Fixed const &src) const;
	bool operator != (Fixed const &src) const;

	Fixed operator + (Fixed const &src) const;
	Fixed operator - (Fixed const &src) const;
	Fixed operator * (Fixed const &src) const;
	Fixed operator / (Fixed const &src) const;

	const Fixed & operator -- ();
	const Fixed operator -- (int);
	const Fixed & operator ++ ();
	const Fixed operator ++ (int);

	static Fixed &min(Fixed &value_1, Fixed &value_2);
	static Fixed const &min(Fixed const &value_1, Fixed const &value_2);
	static Fixed &max(Fixed &value_1, Fixed &value_2);
	static Fixed const &max(Fixed const &value_1, Fixed const &value_2);

};

std::ostream & operator << (std::ostream & out, Fixed const &fixed);


#endif //CPP_MODULE_FIXED_HPP
