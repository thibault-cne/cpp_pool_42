#include "PmergeMe.hpp"

void	isSorted(std::deque<int> &deque)
{
	bool	sorted = true;

	std::deque<int>::iterator	it;

	for (it = deque.begin(); it + 1 != deque.end(); it++)
	{
		if (*it > *(it + 1))
		{
			sorted = false;
			break;
		}
	}
	std::cout << "Deque is sorted:  " << (sorted ? "true\n" : "false\n"); 
}

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

void	coutV(std::vector<int> list)
{
	std::vector<int>::iterator it = list.begin();
	int	i = 0;

	std::cout << "After: ";
	while (it != list.end() && i < 5)
	{
		std::cout << *it << " ";
		it++;
		i++;
	}
	if (i == 5 && it != list.end())
		std::cout << "[...]";
	std::cout << std::endl;
}

void	coutD(std::deque<int> deque)
{
	std::deque<int>::iterator it = deque.begin();
	int	i = 0;

	std::cout << "Before: ";
	while (it != deque.end() && i < 5)
	{
		std::cout << *it << " ";
		it++;
		i++;
	}
	if (i == 5 && it != deque.end())
		std::cout << "[...]";
	std::cout << std::endl;
}

int main(int ac, char **av)
{
	if (ac < 2)
	{
		std::cerr << "Error: need a positive integer sequence\n";
		return (1);
	}
	
	std::deque<int>		deque;
	std::vector<int>	vector;
	std::clock_t		start;
	std::clock_t		end;
	double			elapsed_time;

	storeInContainers(deque, vector, av);

	coutD(deque);

	start = std::clock();
	mergeInsertionSort(vector, 0, vector.size() -  1, vector.size() / 10);
	end = std::clock();
	coutV(vector);
	elapsed_time = double(end - start) / CLOCKS_PER_SEC;
	std::cout << "Time to process a range of " << vector.size()
		<< " with std::vector : " << elapsed_time * 1000 << " useconds\n";

	start = std::clock();
	mergeInsertionSort(deque, 0, deque.size() -  1, deque.size() / 10);
	end = std::clock();
	elapsed_time = double(end - start) / CLOCKS_PER_SEC;
	std::cout << "Time to process a range of " << deque.size()
		<< " with std::deque : " << elapsed_time * 1000<< " useconds\n";


	isSorted(vector);
	isSorted(deque);

	return (0);
}
