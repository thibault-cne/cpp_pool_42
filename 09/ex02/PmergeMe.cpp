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

void	insertionSort(std::list<int> &list, int left, int right)
{
	int	i, j;
	int	tmp;
	IT	a = list.begin() + left, b;

	for (i = left; i <= right; i++)
	{
		j = i;
		b = a;
		while (j > 0 && *(b - 1) > *b)
		{
			tmp = *(b - 1);
			*(b - 1) = *b;
			*b = tmp;
			j--;
			b--;
		}
		a++;
	}
}

void	merge(std::list<int> &list, int left, int mid, int right)
{
	int	leftLength = mid - left + 1;
	int	rightLength = right - mid;
	IT	it = list.begin();
	for (int m = 0; m < left; m++)
		it++;

	std::list<int> leftList(leftLength);
	std::list<int> rightList(rightLength);

	for (int i = 0; i < leftLength; i++)
		leftList.push_back(*(it + i));
	it = list.begin() + mid + 1;
	for (int j = 0; j < rightLength; j++)
		rightList.push_back(*(it + j));

	IT	leftIndex = leftList.begin();
	IT	rightIndex = rightList.begin();

	it = list.begin();

	for (int k = left; k <= right; k++)
	{
		if (rightIndex == rightList.end())
		{
			*it = *leftIndex;
			it++;
			leftIndex++;

		}
		else if (leftIndex == leftList.end())
		{
			*it = *rightIndex;
			it++;
			rightIndex++;
		}
		else if (*rightIndex >= *leftIndex)
		{
			*it = *leftIndex;
			it++;
			leftIndex++;
		}
		else
		{
			*it = *rightIndex;
			it++;
			rightIndex++;
		}
	}
}

void	mergeInsertionSort(std::list<int> &list, int left, int right, int k)
{
	int	mid;

	if (right - left > (5 + k))
	{
			mid = left + (right - left) / 2;
			mergeInsertionSort(list, 0, mid, k);
			mergeInsertionSort(list, mid + 1, right, k);
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
