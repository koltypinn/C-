#include "Bureaucrat.hpp"

void Bureaucrat::setGrade(int &_grade)
{
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->grade = _grade;
}

Bureaucrat::Bureaucrat(std::string _name) : name(_name) { }

Bureaucrat::Bureaucrat(std::string _name, int _grade) : name(_name)
{
	this->setGrade(_grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) : name(obj.name), grade(obj.grade) { }

void Bureaucrat::incrementGrade()
{
	int tmp = this->grade - 1;
	this->setGrade(tmp);
}

void Bureaucrat::decrementGrade()
{
	int tmp = this->grade + 1;
	this->setGrade(tmp);
}

std::string Bureaucrat::getName() const
{
	return (this->name);
}

int Bureaucrat::getGrade() const
{
	return (this->grade);
}

Bureaucrat& Bureaucrat::operator= (const Bureaucrat& obj)
{
	return (*this);
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj)
{
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return os;
}

Bureaucrat::~Bureaucrat() { }
