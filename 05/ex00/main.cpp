#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat *jack = new Bureaucrat("JACK", 0);
		std::cout << *jack << std::endl;
		delete jack;
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Bureaucrat *jack = new Bureaucrat("JACK", 10);
		jack->incrementGrade();
		std::cout << *jack << std::endl;
		delete jack;
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Bureaucrat *jack = new Bureaucrat("JACK", 250);
		std::cout << *jack << std::endl;
		delete jack;
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}
}