#include <functional>
#include <vector>
#include <iostream>
#include <algorithm>

struct increase : public std::unary_function<int, int>
{
	static int inc;
	int operator() (int &tmp)
	{
		tmp += inc;
		if(tmp % 100 == 0 && tmp % 400 != 0) tmp = -1;
		inc += 4;
		return tmp;
	}
};
int increase::inc = 0;
increase incr;
int main()
{
	int t;
	while(std::cin >> t)
	{
		while(t--)
		{
			int y, n;
			std::cin >> y >> n;
			y = y - y % 4 + ((y % 4) ? 4 : 0);
			//级数求和
			std::vector<int> year(n + n / 24 + 1, y);
			increase::inc = 0;
			std::for_each(year.begin(), year.end(), incr);
			year.erase(std::remove(year.begin(), year.end(), -1)
					, year.end());
			std::cout << year.at(n - 1)  << std::endl;
		}
	}
}
