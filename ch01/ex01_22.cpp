#include <iostream>
#include "Sales_item.h"

int main()
{
	std::cout << "Enter transactions with same ISBN:" << std::endl;
	Sales_item item, sum;
	std::cin >> item;
	sum = item;

	while(std::cin >> item)
	{
		if(item.isbn() == sum.isbn())
			sum += item;
		else
		{
			std::cout << sum << std::endl;
			return 0;
		}
	}
}
