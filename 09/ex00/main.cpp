#include <BitcoinExchange.hpp>

void	printMap(std::map<std::string, double> &map)
{
	std::map<std::string, double>::iterator it;

	it = map.begin();
	while (it != map.end())
	{
		std::cout.precision(7);
		std::cout << it->first <<"," << it->second<< std::endl;
		it++;
	}
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "\033[31mError: could not open file.\033[0m" << std::endl;
		exit(1);
	}

	std::string	file = av[1];
	std::map<std::string, double> map;
	getData(map);
	getValue(file, map);
	return (0);
}
