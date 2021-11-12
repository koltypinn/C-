#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Array.hpp"

int main() {
	Array<int> sec(3);
	Array<std::string> thi(10);
	Array<int> empty;

	sec[2] = 50;
	thi[9] = "something";
	std::cout << sec[2] << std::endl << thi[9] << std::endl << std::endl;

	std::cout << empty.size() << std::endl;
	std::cout << sec.size() << std::endl;
	std::cout << thi.size() << std::endl;


	try {
		std::cout << sec[10] << "try to access" << std::endl;
	}
	catch(std::exception &e) {
		std::cout << "Exception" << e.what() << std::endl;
	}
return (0);
}
