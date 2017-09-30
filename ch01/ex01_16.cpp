#include <iostream>

int main()
{
	std::cout << "Enter integers to sum" << std::endl;
        int sum = 0;
	for(int val =0; std::cin >> val; sum+=val);
	std::cout << "The sum is " << sum << std::endl;
        return 0;
}
