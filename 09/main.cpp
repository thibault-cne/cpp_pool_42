#include <BitcoinExchange.hpp>

int main(int ac, char **av)
{
	if (ac != 2)
		std::cout << "\033[31mError Args: ./btc <file>\033[0m" << std::endl;

	std::string	file = av[1];

	return (0);
}
