# include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string _name)
	: Form(_name, 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj)
	: Form(obj.getName(), obj.getgradeExec(), obj.getgradeSign()) {}

RobotomyRequestForm& RobotomyRequestForm::operator= (const RobotomyRequestForm& obj)
{
	return (*this);
}

void RobotomyRequestForm::execute (Bureaucrat const & executor) const
{
	executor.executeForm(*this);

	if (executor.getGrade() > this->getgradeExec())
		throw Form::GradeTooLowException();
	else if (this->getStatus()) // action
	{
		std::cout << "** BRRR BRRR BRRR **\n";
		int rm = std::rand();
		
		if (rm % 2 == 0)
			std::cout << this->getName() << " has been robotomized successfully\n";
		else
			std::cout << this->getName() << " has been robotomized is NOT successfully\n";
	}
}

RobotomyRequestForm::~RobotomyRequestForm() {}

 
