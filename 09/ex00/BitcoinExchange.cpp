#include <BitcoinExchange.hpp>

void	getValue(std::string &file, std::map<std::string, double> &map)
{
	std::ifstream	f(file.c_str());
	(void)map;

	if (!f)
	{
		std::cerr << "\033[31mError: could not open file.\033[0m\n";
		exit(1);
	}
}

void	getData(std::map<std::string, double> &map)
{
	std::string	s, time, price;
	double		num;
	std::ifstream data("data.csv");

	if (!data)
	{
		std::cerr << "\033[31mError: could not open database.\033[0m\n";
		exit(1);
	}
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
