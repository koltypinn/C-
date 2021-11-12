#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>

template <typename T>
class MutantStack: public std::stack<T>
{
private:
public:
	MutantStack() {};
	~MutantStack() {};
	MutantStack(MutantStack const & src)
	{
		*this = src;
	};
	MutantStack&	operator=(MutantStack const & rhs)
	{
		(void)rhs;
		return *this;
	}

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator	begin()
	{
		return (std::stack<T>::c.begin());
	}
	iterator	end()
	{
		return (std::stack<T>::c.end());
	}
};

#endif
