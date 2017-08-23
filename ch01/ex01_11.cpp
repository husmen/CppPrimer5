#include <iostream>

int main()
{
	std::cout << "Enter two integers" << std::endl;
        int val1 = 0, val2 = 0;
	std::cin >> val1 >> val2;

	//Makes sure that val1 < val2
	if(val1 > val2)
	{
		int tmp = val1;
		val1 = val2;
		val2 = tmp;
	}

        while (val1 <= val2)
        {
                std::cout << val1 << std::endl;
		++val1;
        }
        return 0;
}
