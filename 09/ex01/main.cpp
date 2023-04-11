#include "RPN.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "\033[31mError: usage: ./RPN \"1 + 1\".\n\033[0m";
		return (1);
	}

	std::string str(av[1]);

	if (str.find_first_not_of("1234567890-+/* ") != std::string::npos)
	{
		std::cerr << "\033[31mError: 1234567890 +-/* only.\n\033[0m";
		return (1);
	}
	
	std::stack<int>	stack;

	return (process(stack, str));
}
