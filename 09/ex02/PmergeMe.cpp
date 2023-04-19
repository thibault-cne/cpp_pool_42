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

/* ******************* DEQUE ********************************* */

void	insertionSort(std::deque<int> &deque, int left, int right)
{
	int	i, j;
	int	tmp;

	for (i = left; i <= right; i++)
	{
		j = i;
		while (j > 0 && deque[j - 1] > deque[j])
		{
			tmp = deque[j - 1];
			deque[j - 1] = deque[j];
			deque[j] = tmp;
			j--;
		}
	}
}

void	merge(std::deque<int> &deque, int left, int mid, int right)
{
	int	leftLength = mid - left + 1;
	int	rightLength = right - mid;

	std::deque<int> leftdeque(leftLength);
	std::deque<int> rightdeque(rightLength);

	for (int i = 0; i < leftLength; i++)
		leftdeque[i] = deque[left + i];
	for (int j = 0; j < rightLength; j++)
		rightdeque[j] = deque[mid + 1 + j];

	int	leftIndex = 0;
	int	rightIndex = 0;

	for (int k = left; k <= right; k++)
	{
		if (rightIndex == rightLength)
		{
			deque[k] = leftdeque[leftIndex];
			leftIndex++;
		}
		else if (leftIndex == leftLength)
		{
			deque[k] = rightdeque[rightIndex];
			rightIndex++;
		}
		else if (rightdeque[rightIndex] >= leftdeque[leftIndex])
		{
			deque[k] = leftdeque[leftIndex];
			leftIndex++;
		}
		else
		{
			deque[k] = rightdeque[rightIndex];
			rightIndex++;
		}
	}
}

void	mergeInsertionSort(std::deque<int> &deque, int left, int right, int k)
{
	int	mid;

	if (right - left > (5 + k))
	{
			mid = left + (right - left) / 2;
			mergeInsertionSort(deque, 0, mid, k);
			mergeInsertionSort(deque, mid + 1, right, k);
			merge(deque, left, mid, right);
	}
	else
		insertionSort(deque, left, right);
}

/* ******************* DEQUE ********************************* */

/* *********************************************************** */

void    storeInContainers(std::deque<int> &deque, std::vector<int> &vector, char **av)
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
		deque.push_back((int)nb);
	}
}
