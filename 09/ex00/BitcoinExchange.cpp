#include <BitcoinExchange.hpp>

static int	err_bad_input(std::string time)
{
	std::cerr << "\033[33mError: bad input => \033[0m" << time << std::endl;
	return (0);
}

static int	check_time(std::string time)
{
	std::string	s;
	int	i = 0;
	
	if (!time.size())
	{
		std::cerr << "\033[33mError: no time provided\n\033[0m";
		return (0);
	}
	if (time[time.size() - 1] == ' ')
		time.erase(time.size() - 1);
	std::stringstream	ss(time);

	std::getline(ss, s, '-');
	if (s.size() != 4)
		return (err_bad_input(time));
	while (std::getline(ss, s, '-'))
	{
		int	nb;
		std::istringstream ssd(s);
		ssd >> nb;
		if (s.size() != 2)
			return (err_bad_input(time));
		if (i == 0)
			if (nb < 0 || nb > 12)
				return (err_bad_input(time));
		if (i == 1)
			if (nb < 0 || nb > 31)
				return (err_bad_input(time));
		if (i > 1)
			return (err_bad_input(time));
		i++;
	}
	if (i != 2)
		return (err_bad_input(time));
	return (1);
}

static double	check_price(std::string price)
{
	double	num;

	if (!price.size())
	{
		std::cerr << "\033[33mError: no number provided.\n\033[0m";
		return (-1);
	}
	std::istringstream ssd(price);
	ssd >> num;
	if (num < 0)
	{
		std::cerr << "\033[33mError: not a positive number.\n\033[0m";
		return (-1);
	}
	if (num > 1000)
	{
		std::cerr << "\033[33mError: too large number.\n\033[0m";
		return (-1);
	}
	return (num);
}

double	get_conv(std::string time, double num, std::map<std::string, double> &map)
{
	std::map<std::string, double>::iterator it = map.begin();

	if (time[time.size() - 1] == ' ')
		time.erase(time.size() - 1);
	while (it != map.end())
	{
		if (time == it->first)
			return (it->second * num);	
		it++;
	}
	it = map.lower_bound(time);
	if (it != map.begin())
	{
		it--;
		return (it->second * num);
	}
	return (it->second * num);
}

void	getValue(std::string &file, std::map<std::string, double> &map)
{
	std::ifstream	f(file.c_str());
	std::string	s;
	double		res;

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
		res = get_conv(time, num, map);
		std::cout << time << " => " << price << " = " << res << std::endl;
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
