#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "whatever.hpp"

int 	main() {
	int a = 50;
	int b = 250;

	std::cout << "a is: " << a << std::endl;
	std::cout << "b is: " << b << std::endl;
	std::cout << std::endl;
	std::cout << "-----swap-----" << std::endl;
	swap(a, b);
	std::cout << "a is: " << a << std::endl;
	std::cout << "b is: " << b << std::endl;
	std::cout << std::endl;
	std::cout << "-----min -----" << std::endl;
	std::cout << min(a, b) << std::endl;
	std::cout << std::endl;
	std::cout << "-----max-----" << std::endl;
	std::cout << max(a, b) << std::endl;
	std::cout << std::endl;



	Awesome c(2);
	Awesome d(4);
	swap(c, d);
	std::cout << c.getN() << " " << d.getN() << std::endl;
	std::cout << min(c, d).getN() << std::endl;
	std::cout << max(c, d).getN() << std::endl;

	return (0);
}
