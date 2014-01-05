#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>

int main()
{
	int t;
	std::istream_iterator<int> iter(std::cin);
	t = *iter++;
	while(t--)
	{
		std::vector<int> tri(3, 0);
		tri[0] = *iter++;
		tri[1] = *iter++;
		tri[2] = *iter++;
		std::sort(tri.begin(), tri.end());
		std::vector<int> another(tri);
		if(std::unique(tri.begin(), tri.end()) - tri.begin() != 3)
			std::cout << "perfect\n";
		else if(
			another[0] * another[0] + another[1] * another[1] 
			==  another[2] * another[2]
			)
		{
			std::cout << "good\n";
		}
		else std::cout << "just a triangle\n";
	}
}
