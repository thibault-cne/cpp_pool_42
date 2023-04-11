#include "PmergeMe.hpp"

void	cout_v(std::vector<int> list)
{
	std::vector<int>::iterator it = list.begin();

	std::cout << "=vector=\n";
	while (it != list.end())
	{
		std::cout << *it << " ";
		it++;
	}
	std::cout << std::endl;
}

void	cout_l(std::list<int> list)
{
	std::list<int>::iterator it = list.begin();

	std::cout << "=list=\n";
	while (it != list.end())
	{
		std::cout << *it << " ";
		it++;
	}
	std::cout << std::endl;
}

int main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cerr << "Error: need a positive integer sequence\n";
		return (1);
	}
	
	std::list<int>		list;
	std::vector<int>	vector;

	std::clock_t start = std::clock();

	store_in_containers(list, vector, av);

	std::clock_t end = std::clock();
	double elapsed_time = double(end - start) / CLOCKS_PER_SEC;

	cout_l(list);
	cout_v(vector);
	std::cout << "Elapsed time for storing intergers in containers " << elapsed_time << " mseconds\n";

	return (0);
}
