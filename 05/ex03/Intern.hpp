#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "iostream"

class Intern
{
	public:
		Intern();
		Intern(const Intern &obj);

		Intern& operator= (const Intern& obj);

		Form *makeForm(std::string formName, std::string target);
		~Intern();
}; 

#endif
