/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lguillau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:29:53 by lguillau          #+#    #+#             */
/*   Updated: 2022/12/16 16:26:49 by lguillau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <vector>

int main(void)
{
	{
	std::cout << "Stack" << std::endl << std::endl;

	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << "\n";
	MutantStack<int>::iterator rit = mstack.begin();
	MutantStack<int>::iterator rite = mstack.end();

	++rit;
	--rit;
	while (rit != rite)
	{
		std::cout << *rit << std::endl;
		++rit;
	}
	std::stack<int> s(mstack);
	}
	{

	std::cout << "\nVector" << std::endl << std::endl;
	
	std::vector<int> v;

	v.push_back(5);
	v.push_back(17);

	std::cout << v.back() << std::endl;

	v.pop_back();

	std::cout << v.size() << std::endl;

	v.push_back(3);
	v.push_back(5);
	v.push_back(737);
	v.push_back(0);

	std::vector<int>::iterator it = v.begin();
	std::vector<int>::iterator ite = v.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << "\n";
	std::vector<int>::iterator rit = v.begin();
	std::vector<int>::iterator rite = v.end();

	++rit;
	--rit;
	while (rit != rite)
	{
		std::cout << *rit << std::endl;
		++rit;
	}
	std::vector<int> s(v);
	}
	return 0;
}
