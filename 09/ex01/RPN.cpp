#include "RPN.hpp"

static void	operation(std::stack<int> & stack, char & sign)
{
	int	n1, n2, res;

	if (stack.size() < 2)
	{
		std::cerr << "Error: impossible.\n";
		exit(1);
	}
	if (sign == '+')
	{
		n2 = stack.top();
		stack.pop();
		n1 = stack.top();
		stack.pop();
		res = n1 + n2;
	}
	if (sign == '-')
	{
		n2 = stack.top();
		stack.pop();
		n1 = stack.top();
		stack.pop();
		res = n1 - n2;
	}
	if (sign == '/')
	{
		n2 = stack.top();
		stack.pop();
		n1 = stack.top();
		stack.pop();
		if (n2 == 0)
		{
			std::cerr << "Error: / 0\n";
			exit(1);
		}
		res = n1 / n2;
	}
	if (sign == '*')
	{
		n2 = stack.top();
		stack.pop();
		n1 = stack.top();
		stack.pop();
		res = n1 * n2;
	}
	stack.push(res);
}

int	process(std::stack<int> & stack, std::string & str)
{
	std::stringstream 	ss(str);
	std::string		s;

	while (std::getline(ss, s, ' '))
	{
		if (s.size() != 1)
		{
			std::cerr << "Error: need space between inputs or < 10 numbers\n";
			return (1);
		}
		if (s.find_first_of("+-/*") != std::string::npos)
			operation(stack, s[0]);
		else
		{
			int	nb;
			std::istringstream	iss(s);
			iss >> nb;
			stack.push(nb);
		}
	}
	if (stack.size() == 1)
	{
		std::cout << stack.top() << std::endl;
		return (0);
	}

	//More than one left in stack

	std::stack<int>	rev;

	while (!stack.empty())
	{
		rev.push(stack.top());
		stack.pop();
	}
	std::cout << "Stack with more than one operand:";
	while (!rev.empty())
	{
		std::cout << " " << rev.top();
		rev.pop();
	}
	std::cout << std::endl;
	return (0);
}
