#include <iostream>
#include <iomanip>
#include <cmath>

int main()
{
	int t;
	while(std::cin >> t)
	{
		while(t--)
		{
			int x, y;
			char c;
			double ans = 200000000;
			std::cin >> c >> x >> y;
			switch(c)
			{
			case '+': x += y; break;
			case '-': x -= y; break;
			case '*': x *= y; break;
			case '/': ans = x * 1.0 / y; x /= y; break;	
			}
			
			if(c == '/' && fabs(ans - x) > 1e-8)
				std::cout << std::fixed 
					<< std::setprecision(2) 
					<< ans << std::endl;
			else std::cout << x << std::endl;
		}
	}
}
