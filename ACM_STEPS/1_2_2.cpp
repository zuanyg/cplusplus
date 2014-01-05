#include <iostream>

int gcd (int x, int y)
{
	if(y) return gcd(y, x % y);
	return x;
}

int main()
{
	int x, y;
	while(std::cin >> x >> y)
	{
		if(x == -1 && y == -1) break;
		if(gcd(x, y) == 1)
			std::cout << "YES" << std::endl;
		else 	
			std::cout << "POOR Haha" << std::endl;
	}	

	return 0;
}
