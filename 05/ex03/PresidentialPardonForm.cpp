# include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string _name)
	: Form(_name, 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj)
	: Form(obj.getName(), obj.getgradeExec(), obj.getgradeSign()) {}

PresidentialPardonForm& PresidentialPardonForm::operator= (const PresidentialPardonForm& obj)
{
	return (*this);
}

void PresidentialPardonForm::execute (Bureaucrat const & executor) const
{
	executor.executeForm(*this);
	
	if (executor.getGrade() > this->getgradeExec())
		throw Form::GradeTooLowException();
	else if (this->getStatus()) // action
		std::cout << this->getName() << 
		 " has been pardoned by Zafod Beeblebrox.\n";
}

PresidentialPardonForm::~PresidentialPardonForm() {}

 
