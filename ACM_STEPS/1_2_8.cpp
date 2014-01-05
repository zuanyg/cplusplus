#include <map>
#include <iomanip>
#include <iostream>
#include <string>

int main()
{
	std::map<std::string, std::string> m;
	m["330000"] = "Zhejiang";
	m["110000"] = "Beijing";
	m["710000"] = "Taiwan";
	m["820000"] = "Macao";
	m["540000"] = "Tibet";
	m["210000"] = "Liaoning";
	m["810000"] = "Hong Kong";
	m["310000"] = "Shanghai";
	int t;
	while(std::cin >> t)
	{
		while(t--)
		{
			std::string code, year, month, day; 
			std::cin >> std::setw(6) >> code
				>> std::setw(4) >> year
				>> std::setw(2) >> month
				>> std::setw(2) >> day;
			std::cin.ignore(5, '\n');
			code.replace(2, 4, "0000");
			std::cout << "He/She is from " << m[code] 
				<< ",and his/her birthday is on "
				<< month << "," << day << "," << year
				<< " based on the table."
				<< std::endl;
		}
	}
	return 0;
}
