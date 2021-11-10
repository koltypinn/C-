#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat *jack = new Bureaucrat("JACK", 5);
	std::cout << *jack << std::endl;

	Bureaucrat *matt = new Bureaucrat("MATT", 1);
	std::cout << *matt << std::endl << std::endl;

	Form *form = new Form("FORM", 2, 4);

	try
	{
		form->beSigned(*jack);
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;
	std::cout << *form;
	
	std::cout << std::endl;

	try
	{
		form->beSigned(*matt);
	}
	catch(std::exception & e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << std::endl;
	std::cout << *form;
}