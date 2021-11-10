#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

//Shruberry 	*** 135, 147
//Robotomy  	*** 72, 45
//Presidential 	*** 25, 5

int main()
{
	{
		ShrubberyCreationForm form("shrubbery_target"); 

		Bureaucrat jack("JACK", 159);
		Bureaucrat matt("MATT", 10);

		try
		{
			form.beSigned(jack);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		std::cout << std::endl;
		form.execute(matt);
		form.beSigned(matt);
		std::cout << std::endl << form << std::endl;

		try
		{	
			form.execute(jack);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		std::cout << std::endl;
		form.execute(matt);
	}

	{;
		RobotomyRequestForm form("robotomy_target");

		Bureaucrat jack("JACK", 150);
		Bureaucrat matt("MATT", 10);

		try
		{
			form.beSigned(jack);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		std::cout << std::endl;
		form.execute(matt);
		form.beSigned(matt);
		std::cout << std::endl << form << std::endl;
		
		try
		{	
			form.execute(jack);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		std::cout << std::endl;
		form.execute(matt);
		form.execute(matt);
	}

	{
		PresidentialPardonForm form("presidential_target");

		Bureaucrat jack("JACK", 150);
		Bureaucrat matt("MATT", 1);

		try
		{
			form.beSigned(jack);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		std::cout << std::endl;
		form.execute(matt);
		form.beSigned(matt);
		std::cout << std::endl << form << std::endl;
		
		try
		{	
			form.execute(jack);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

		std::cout << std::endl;
		form.execute(matt);
	}
}