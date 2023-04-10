#include <BitcoinExchange.hpp>

static int	check_time(std::string time)
{
	std::string	s;
	int	i;

	if (!time.size())
	{
		std::cerr << "Error: no time provided\n";
		return (0);
	}
	std::stringstream	ss(time);

	std::getline(ss, s, '-');
	while (std::getline(ss, s, '-'))
	{
		if (
	}

	return (1);
}

static double	check_price(std::string price)
{
	double	num;

	if (!price.size())
	{
		std::cerr << "Error: no number provided\n";
		return (-1);
	}
	std::istringstream ssd(price);
	ssd >> num;
	if (num < 0)
	{
		std::cerr << "Error: not a positive number\n";
		return (-1);
	}
	if (num > 1000)
	{
		std::cerr << "Error: too large number\n";
		return (-1);
	}
	return (num);
}

void	getValue(std::string &file, std::map<std::string, double> &map)
{
	std::ifstream	f(file.c_str());
	std::string	s;
	(void)map;

	if (!f)
	{
		std::cerr << "\033[31mError: could not open file.\033[0m\n";
		exit(1);
	}
	std::getline(f, s);
	if (s != "date | value")
	{
		std::cerr << "\033[31mError: bad file format.\033[0m\n";
		exit(1);
	}
	while (std::getline(f, s))
	{
		double		num;
		std::string time, price;
		std::stringstream ss(s);

		std::getline(ss, time, '|');
		if (!check_time(time))
			continue ;
		std::getline(ss, price, '|');
		if ((num = check_price(price)) == -1)
			continue ;
		std::cout << "time: " << time << "price: " << num << std::endl;
	}
}

void	getData(std::map<std::string, double> &map)
{
	std::string	s;
	std::ifstream data("data.csv");

	if (!data)
	{
		std::cerr << "\033[31mError: could not open database.\033[0m\n";
		exit(1);
	}
	std::getline(data, s);
	while (std::getline(data, s))
	{
		double		num;
		std::string time, price;
		std::stringstream ss(s);

		std::getline(ss, time, ',');
		std::getline(ss, price, ',');
		std::istringstream ssd(price);
		ssd >> num;
		map[time] = num;
	}
}
