#include <PmergeMe.hpp>

/* ******************* vector ********************************* */

void	insertionSort(std::vector<int> &vec, int left, int right)
{
	int	i, j;
	int	tmp;

	for (i = left; i <= right; i++)
	{
		j = i;
		while (j > 0 && vec[j - 1] > vec[j])
		{
			tmp = vec[j - 1];
			vec[j - 1] = vec[j];
			vec[j] = tmp;
			j--;
		}
	}
}

void	merge(std::vector<int> &vec, int left, int mid, int right)
{
	int	leftLength = mid - left + 1;
	int	rightLength = right - mid;

	std::vector<int> leftVec(leftLength);
	std::vector<int> rightVec(rightLength);

	for (int i = 0; i < leftLength; i++)
		leftVec[i] = vec[left + i];
	for (int j = 0; j < rightLength; j++)
		rightVec[j] = vec[mid + 1 + j];

	int	leftIndex = 0;
	int	rightIndex = 0;

	for (int k = left; k <= right; k++)
	{
		if (rightIndex == rightLength)
		{
			vec[k] = leftVec[leftIndex];
			leftIndex++;
		}
		else if (leftIndex == leftLength)
		{
			vec[k] = rightVec[rightIndex];
			rightIndex++;
		}
		else if (rightVec[rightIndex] >= leftVec[leftIndex])
		{
			vec[k] = leftVec[leftIndex];
			leftIndex++;
		}
		else
		{
			vec[k] = rightVec[rightIndex];
			rightIndex++;
		}
	}
}

void	mergeInsertionSort(std::vector<int> &vec, int left, int right, int k)
{
	int	mid;

	if (right - left > (5 + k))
	{
			mid = left + (right - left) / 2;
			mergeInsertionSort(vec, 0, mid, k);
			mergeInsertionSort(vec, mid + 1, right, k);
			merge(vec, left, mid, right);
	}
	else
		insertionSort(vec, left, right);
}

/* ******************* LIST ********************************* */

void	insertionSort(std::list<int> &list, IT left, IT right)
{
	IT	i, j;
	int	tmp;

	for (i = left; i != right; i++)
	{
		j = i;
		while (j != left && *std::prev(j) > *j)
		{
			tmp = *std::prev(j);
			*std::prev(j) = *j;
			*j = tmp;
			j--;
		}
	}
}

void	merge(std::list<int> &list, IT left, IT mid, IT right)
{
	(void)list;
	int	leftLength = std::distance(left, mid) + 1;
	int	rightLength = std::distance(mid, right);

	std::list<int> leftList;
	std::list<int> rightList;

	for (int i = 0; i < leftLength; i++)
		leftList.push_back(*(std::distance(left, i)));
	for (int j = 0; j < rightLength; j++)
		rightList.push_back(*(std::distance(mid, right)));

	IT	leftIndex = leftList.begin();
	IT	rightIndex = rightList.begin();


	for (IT it = left; it != right; it++)
	{
		if (rightIndex == rightList.end())
		{
			*it = *leftIndex;
			leftIndex++;

		}
		else if (leftIndex == leftList.end())
		{
			*it = *rightIndex;
			rightIndex++;
		}
		else if (*rightIndex >= *leftIndex)
		{
			*it = *leftIndex;
			leftIndex++;
		}
		else
		{
			*it = *rightIndex;
			rightIndex++;
		}
	}
}

void	mergeInsertionSort(std::list<int> &list, IT left, IT right, int k)
{
	IT	mid;

	if (std::distance(left, right) > (5 + k))
	{
			mid = left;
			std::advance(mid, std::distance(left, right) / 2);
			mergeInsertionSort(list, left, mid, k);
			mergeInsertionSort(list, std::next(mid), right, k);
			merge(list, left, mid, right);
	}
	else
		insertionSort(list, left, right);
}

/* ************************************************** */

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
