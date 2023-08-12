#include "Array.hpp"

int main()
{
    Array<int> arrayVal(10);

    for (unsigned int i = 0; i < arrayVal.size(); i++ )
        arrayVal[i] = i * 2;

    std::cout << "Int Array 1: " << arrayVal << std::endl;

    try
    {
        std::cout << "Accessing a valid index: " << arrayVal[3] << std::endl;
        std::cout << "Accessing an invalid index: " << arrayVal[11] << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << RED << "Error: " << e.what() << RESET <<  std::endl;
    }

    std::cout << "-----------------------------------------------------" << std::endl;

    return ( 0 );
}


// int main()
// {
//     try
//     {
//         Array<int> ArrayVal[5] = {1, 2, 3, 4, 5};
//         ArrayVal.printElement(ArrayVal->size());

//     }
//     catch (std::exception &e)
//     {
//         std::cout << e.what() << RESET << std::endl;
//     }

//     return (0);
// }