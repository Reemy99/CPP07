#ifndef  ARRAY_HPP
#define ARRAY_HPP

#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define BLUE    "\033[34m" 
#define YELLOW  "\033[33m"
#define RESET	"\033[0m"

#include <iostream>
# include <string>
# include <cstdlib>
# include <cstring>
# include <exception>

template<typename T>
class Array
{
    private:
        T*           _value;
        unsigned int _size;
    public:
        Array();
        Array(unsigned int n);
        Array(Array &copy);
        ~Array();

        Array& operator=(Array const &rhs);
        T &operator[](unsigned int element) const;
		unsigned int size() const;
};

template <typename T>
Array<T>::Array()
{
    this->_value = new T[0];
    this->_len = 0;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
    this->_value = new T[n];
    this->_size = n;
}

template <typename T>
Array<T>::Array(Array &copy): _size(copy._size)
{
    this->_value = new T[copy._size];
    for (unsigned int i = 0; i < this->_size; i++)
    this->_value[i] = copy._value[i];
}

template <typename T>
Array<T> &Array<T>::operator=(Array const &rhs)
{
    this->_size = rhs._size;
    this->_value = new T[rhs._size];
    for(int i = 0; i < this->_size; i++)
    {
        this->_value[i] = rhs._value[i];
    }
    return (*this);
}

template <typename T>
T &Array<T>::operator[](unsigned int element) const
{
    if (element >= this->_size || element < 0)
		    throw std::out_of_range("Out Of Range");
        return (this->_value[element]);
}

template <typename T>
Array <T>::~Array()
{
    delete[] _value;
}

template <typename T>
unsigned int Array <T>::size() const
{
    return this->_size;
}

template < typename T >
std::ostream& operator<<( std::ostream& out, const Array<T>& val)
{
    for ( unsigned int i = 0; i < val.size(); i++ )
        out << val[i] << " ";
    return out;
}
#endif