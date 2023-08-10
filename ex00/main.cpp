#include "whatever.hpp"

int main()
{
    int a = 2;
	int b = 3;

	::swap(a, b );
	std::cout << BLUE << "\na = " << a << " || b = " << b << RESET << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << "\n________________" << std::endl;
	
	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout <<  BLUE << "\nc = " << c << ", d = " << d << RESET << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << "\n________________" << std::endl;

    double i = 11.1;
    double j = 22.2;

    ::swap(i, j);
    std::cout << BLUE << "\ni = " << i << "j = " << j << RESET << std::endl;
    std::cout << "min (i, j) = " << ::min(i, j) << std::endl;
    std::cout << "max (i, j) = " << ::max(i, j) << std::endl;
}