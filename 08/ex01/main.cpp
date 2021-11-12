#include "span.hpp"
#include <iostream>
#include <stdlib.h>


int main()
{
    Span se = Span(5);
    se.addNumber(5);
    se.addNumber(3);
    se.addNumber(17);
    se.addNumber(9);
    se.addNumber(11);

    std::cout << se.shortestSpan() << std::endl;
    std::cout << se.longestSpan() << std::endl;

    Span me = Span(120);
    me.addNumber(234, 10);
    std::cout << me.shortestSpan() << std::endl;
    std::cout << me.longestSpan() << std::endl;

    Span tr = Span(50);
	for (int i = 0; i < 50; i++)
		tr.addNumber(i);
    std::cout << tr.shortestSpan() << std::endl;
    std::cout << tr.longestSpan() << std::endl;
}
