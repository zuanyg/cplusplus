#include <iostream>

int main()
{
	long long a, b;
	while(std::cin >> std::hex >> a >> b)
	{
		std::cout << std::dec << a + b << std::endl;
	}
	return 0;
}
