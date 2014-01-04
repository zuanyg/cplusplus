#include <iostream>
#include <iterator>
#include <vector>
#include <numeric>

std::istream_iterator<int> eos;
std::istream_iterator<int> iter(std::cin);

int main()
{	
	std::ostream_iterator<int> output(std::cout, "\n");
	while(iter != eos)
	{
		int num = *iter++;
		std::vector<int> sum(num, 0);
		for(int i = 0; i < num; ++i)
		{
			sum[i] = *iter;
			++iter;
		}
		*output = std::accumulate(sum.begin(), sum.end(), 0);
	}
	return 0;
}
