#include <iostream>
#include "Sales_item.h"

int main()
{
	std::cout << "Enter transactions:" << std::endl;
	Sales_item currItem, item;
	int count = 0;

	if(std::cin >> currItem)
		++count;

	while(std::cin >> item)
	{
		if(item.isbn() == currItem.isbn())
			++count;
		else
		{
			std::cout << currItem.isbn() << " occurs " << count << " times." << std::endl;
			currItem = item;
			count = 1;
		}
	}
	std::cout << currItem.isbn() << " occurs " << count << " times." << std::endl;
	return 0;
}
