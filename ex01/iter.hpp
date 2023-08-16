#ifndef ITER_HPP
#define ITER_HPP

#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define BLUE    "\033[34m" 
#define YELLOW  "\033[33m"
#define RESET	"\033[0m"

#include <iostream>


template< typename T >
void	iter(T *arr, int size, void(*f)(T const &elem))
{
	for (int i = 0; i < size; i++)
		f(arr[i]);
	
}

template< typename T >
void	print(T const &value) 
{
	std::cout << value << std::flush;
}

#endif