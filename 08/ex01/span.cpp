#include "span.hpp"

Span::Span(): _n(0)
{}

Span::Span(unsigned int n): _n(n)
{}

Span::Span(const Span& other)
{
    *this = other;
}

Span& Span::operator=(const Span& other)
{
    if (&other == this)
        return (*this);
    this->_n = other._n;
    this->array = other.array;
    return (*this);
}

Span::~Span()
{}

void Span::addNumber(int cur_n)
{
    if (this->array.size() >= _n)
    {
        std::cerr << "Full\n";
        throw std::exception();
    }
    else
        this->array.push_back(cur_n);
}

void Span::addNumber(int n, unsigned int count)
{
    if ((this->array.size() + count) > _n)
    {
        std::cerr << "Full\n";
        throw std::exception();
    }
    else
    {
        std::vector<int>::iterator i = this->array.end();
        this->array.insert(i, count, n);
    }
}

unsigned long Span::shortestSpan()
{
    if (this->array.size() < 2)
    {
        std::cerr << "No span";
        throw std::exception();
    }
    std::vector<int>tmp = this->array;
    std::vector<int>::iterator i;
    std::sort(tmp.begin(), tmp.end());
    unsigned long shortSpan = longestSpan();
    for (i = tmp.begin(); i < tmp.end() - 1; i++)
    {
        if (static_cast<unsigned long>(*(i + 1) - *i) < shortSpan)
            shortSpan = *(i + 1) - *i;
    }
    return (shortSpan);
}

unsigned long Span::longestSpan()
{
	if (this->array.size() < 2)
    {
        std::cerr << "No span";
        throw std::exception();
    }
    std::vector<int>tmp = this->array;
    std::vector<int>::iterator i;
    std::sort(tmp.begin(), tmp.end());
	unsigned long longestSpan = static_cast<unsigned long>(*(tmp.end() - 1)) - static_cast<unsigned long>(*tmp.begin());
	return longestSpan;
}
