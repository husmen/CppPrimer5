#include <iostream>
#include "Sales_item.h"

int main()
{
	std::cout << "Enter transactions:" << std::endl;
	Sales_item item;
	while(std::cin >> item)
		std::cout << item << std::endl;
	return 0;
}
