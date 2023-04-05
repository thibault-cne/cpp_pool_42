#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <sstream>
#include <stdlib.h>

void	getData(std::map<std::string, double> &map);
void	getValue(std::string &file, std::map<std::string, double> &map);

#endif
