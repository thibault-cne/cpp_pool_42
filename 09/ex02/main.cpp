#include "PmergeMe.hpp"

void	isSorted(std::vector<int> &vec)
{
	bool	sorted = true;

	std::vector<int>::iterator	it;

	for (it = vec.begin(); it + 1 != vec.end(); it++)
	{
		if (*it > *(it + 1))
		{
			sorted = false;
			break;
		}
	}
	std::cout << "Vector is sorted:  " << (sorted ? "true\n" : "false\n"); 
}

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

	mergeInsertionSort(vector, 0, vector.size() -  1);
	std::clock_t end = std::clock();
	double elapsed_time = double(end - start) / CLOCKS_PER_SEC;

	std::cout << "Elapsed time for storing intergers in containers " << elapsed_time << " seconds\n";
	isSorted(vector);

	return (0);
}
