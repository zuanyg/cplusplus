#include <numeric>
#include <iterator>
#include <iostream>
#include <vector>
#include <iomanip>

int main()
{
	std::vector<double> month(12, 0.0);
	std::istream_iterator<double> eos, iter(std::cin);
	for(int i = 0; i < month.size(); ++i)
	{
		month[i] = *iter++;
	}
	std::cout << "$" 
		<< std::fixed
		<< std::setprecision(2)
		<< std::accumulate(month.begin(), month.end(), 0.0) / 12 
		<< std::endl;
	return 0;
}
