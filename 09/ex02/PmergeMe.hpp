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
# include <list> // here !

# define IT std::list<int>::iterator

void	store_in_containers(std::list<int> & list, std::vector<int> & vector, char **av);

void    mergeInsertionSort(std::vector<int> &vec, int left, int right, int k);
void    mergeInsertionSort(std::list<int> &list, int left, int right, int k);

#endif
