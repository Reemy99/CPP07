#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define BLUE    "\033[34m" 
#define YELLOW  "\033[33m"
#define RESET	"\033[0m"

#include <iostream>

template<typename T>
void swap(T &a, T &b)
{
   T c;
    c = a;
	a = b;
	b = c;
}

template<typename T>
T min (T &a, T &b)
{
    if (b <= a)
        return b;
    return a;
}

template <typename T>
T max (T &a, T &b)
{
    if(b >= a)
        return b;
    return a;
}
#endif