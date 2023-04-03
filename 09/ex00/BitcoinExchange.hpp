#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <string>
#include <map>

class Bitcoin
{
	public:
		Bitcoin(std::string file);

	private:
		std::map _data;
		std::string _input;
};

#endif
