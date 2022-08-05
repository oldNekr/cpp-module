//
// Created by Lauri Rosby on 8/5/22.
//

#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
///*
	Fixed c( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed d( Fixed( 5.05f ) / Fixed( 2 ) );

	std::cout << "d = " << d << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "min(d,c) = " << Fixed::min( d, c ) << std::endl;
	std::cout << "mdx(d,c) = " << Fixed::max( d, c ) << std::endl << std::endl;

	std::cout << "c > d = " << (c > d) << std::endl;
	std::cout << "c < d = " << (c < d) << std::endl;
	std::cout << "c >= d = " << (c >= d) << std::endl;
	std::cout << "c <= d = " << (c <= d) << std::endl;
	std::cout << "c == d = " << (c == d) << std::endl;
	std::cout << "c != d = " << (c != d) << std::endl << std::endl;

	std::cout << "d + c = " << (d + c) << std::endl;
	std::cout << "d - c = " << (d - c) << std::endl;
	std::cout << "c - d = " << (c - d) << std::endl;
	std::cout << "d * c = " << (d * c) << std::endl;
	std::cout << "d / c = " << (d / c) << std::endl;
	std::cout << "c / d = " << (c / d) << std::endl << std::endl;

	std::cout << "c  = " << c << std::endl;
	std::cout << "c-- = " << c-- << std::endl;
	std::cout << "c  = " << c << std::endl << std::endl;
	std::cout << "--c = " << --c << std::endl;
	std::cout << "c++ = " << c++ << std::endl;
	std::cout << "c  = " << c << std::endl << std::endl;
	std::cout << "++c = " << (++c) << std::endl << std::endl;

	std::cout << "d =        " << d << std::endl;
	std::cout << "c =        " << c << std::endl;
	d = c;
	std::cout << "d = c; d = " << d << std::endl;
///*
	return 0;
}
