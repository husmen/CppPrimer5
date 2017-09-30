#include <iostream>
#include "Sales_item.h"

int main()
{
	std::cout << "Enter transactions with same ISBN:" << std::endl;
	Sales_item item1, item2;
	std::cin >> item1 >> item2;
	while(item1.isbn()!=item2.isbn())
	{
		std::cout << "ISBN must be the same, try again:" << std::endl;
		std::cin >> item1 >> item2;
	}
	std::cout << item2 + item1 << std::endl;
	return 0;
}
