#include "iter.hpp"

int main ()
{
    int intArr[5] = {1, 2, 3, 4, 5};
	iter(intArr, 5, print);

    std::cout << "\n_________________________\n" << std::endl;
	char charArr[5] = {'a', 'b', 'c', 'd', 'e'};
	iter(charArr, 5, print);

    std::cout << "\n_________________________\n" << std::endl;
	std::string strArr[3] = {"hi " , "hello ", "world"};
	iter(strArr, 3, print);
	return (0);
}