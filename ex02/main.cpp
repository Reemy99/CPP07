

#include "Array.hpp"

int main()
{
    try
    {
        Array<int> arrayVal(10);

        for (unsigned int i = 0; i < arrayVal.size(); i++ )
            arrayVal[i] = i * 2;

        std::cout << "Int Array 1: " << arrayVal << std::endl;
        std::cout << "Accessing a valid index: " << arrayVal[3] << std::endl;
        std::cout << "Accessing an invalid index: " << arrayVal[19876543] << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << RED << "Error " << e.what() << RESET <<  std::endl;
    }


    try
    {
        Array<std::string> strVal(3);
        strVal[0] = "hi";
        strVal[1] = "hello";
        strVal[2] = "world";

        std::cout << "\nthe size is :" << strVal.size() << std::endl;
        std::cout << "Accessing a valid index :" << strVal[1] << std::endl;
        std::cout << "Accessing an invalid index :" << &strVal[4567789] << std::endl;       
    }
    catch(std::exception& e)
    {
        std::cout << RED << "Error " << e.what() << RESET <<  std::endl;
    }
    
    std::cout << "-----------------------------------------------------" << std::endl;
    return (0);
}