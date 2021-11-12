#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

class Span
{
    private:
        unsigned int _n;
        std::vector<int> array;
    public:
        Span();
        Span(unsigned int n);
        Span(const Span& other);
        Span& operator=(const Span& other);
        ~Span();
        void addNumber(int n);
        void addNumber(int n, unsigned int count);
        unsigned long shortestSpan();
        unsigned long longestSpan();
};
