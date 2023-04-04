#include <BitcoinExchange.hpp>

void	getData(std::map<std::string, double> &map)
{
	std::string	s, time, price;
	double		num;
	std::ifstream data("data.csv");

	if (!data)
		exit(1);
	std::getline(data, s);
	while (std::getline(data, s))
	{
		std::stringstream ss(s);
		std::getline(ss, time, ',');
		std::getline(ss, price, ',');
		std::istringstream ssd(price);
		ssd >> num;
		map[time] = num;
	}
}
