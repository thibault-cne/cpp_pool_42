#include <PmergeMe.hpp>

void	merge(vector<int> &vec, int left, int mid, int right)
{
}

void	mergeInsertionSort(vector<int> &vec, int left, int right)
{
	int	mid;

	if (left < right)
	{
		if (right - left < 11)
		{
		}
		else
		{
			mid = left + (right - left) / 2;
			mergeInsertionSort(vec, 0, mid);
			mergeInsertionSort(vec, mid + 1, right);
			merge(vec, left, mid, right);
		}
	}
}

void    store_in_containers(std::list<int> &list, std::vector<int> &vector, char **av)
{
	int		i = 0;

	while (av[++i])
	{
		std::string	str(av[i]);
		if (str.find_first_not_of("1234567890") != std::string::npos || str.size() > 10)
		{
			std::cerr << "Error: need only positive integers in the sequence.\n";
			exit(1);
		}

		std::istringstream	iss(str);
		long int		nb;
		iss >> nb;
		if (nb > 2147483647 || nb < 0)
		{
			std::cerr << "Error: need only positive integers in the sequence.\n";
			exit(1);
		}
		vector.push_back((int)nb);
		list.push_back((int)nb);
	}
}
