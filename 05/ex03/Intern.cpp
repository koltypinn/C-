# include "Intern.hpp"

Intern::Intern() {}
Intern::Intern(const Intern &obj) {}

Form *Intern::makeForm(std::string formName, std::string target)
{
	std::string formTypes[] = {"shrubbery creation", "robotomy request", "presidential pardon" };
	Form *forms[] = { new ShrubberyCreationForm(target), new RobotomyRequestForm(target), 
		new PresidentialPardonForm(target) };
	Form *resultForm = nullptr;

	for (int i = 0; i < 3; i++)
	{
		if (formTypes[i] != formName)
			delete forms[i];
		else resultForm = forms[i];
	}
	
	if (resultForm == nullptr)
		std::cout << "Error: no such Form\n";
	return (resultForm);
}

Intern& Intern::operator= (const Intern& obj) { return (*this); }
Intern::~Intern() {}