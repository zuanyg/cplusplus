#include <bitset>
#include <iostream>

int main()
{
	std::bitset<10000> bs;
	int t;
	while(std::cin >> t)
	{
		while(t--)
		{
			bs.reset();
			int n, m;
			std::cin >> n >> m;
			for(int i = 0, x; i < n * m; ++i)
			{
				std::cin >> x;
				if(x) bs.set(i);
			}
			std::cout << bs.count() << std::endl;
		}
	}
}
