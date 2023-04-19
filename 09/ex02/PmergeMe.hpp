#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <string>
# include <fstream>
# include <sstream>
# include <stdlib.h>
# include <ctime>
# include <algorithm>

# include <vector> // here !
# include <deque> // here !


void	storeInContainers(std::deque<int> &deque, std::vector<int> &vector, char **av);

void    mergeInsertionSort(std::vector<int> &vec, int left, int right, int k);
void    mergeInsertionSort(std::deque<int> &deque, int left, int right, int k);

#endif
