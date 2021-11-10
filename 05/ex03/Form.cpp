#include "Form.hpp"

void Form::check_grade(int &_grade) const
{
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

Form::Form(std::string _name, int _grade_signed, int _grade_execute)
	: name(_name), gradeSign(_grade_signed), gradeExec(_grade_execute)
{
	check_grade(_grade_signed);
	check_grade(_grade_execute);
	isSigned = false;
}

void Form::signForm(std::string brname, bool result)
{
	this->isSigned = result;

	if (result)
		std::cout << brname << " signs form " << this->name << "\n";
	else
		std::cout << brname << " can'no't sign " << this->name 
			<< " because he's a goof\n";
}

void Form::beSigned(Bureaucrat &br)
{
	if (br.getGrade() > this->gradeSign)
	{
		signForm(br.getName(), false);
		throw Form::GradeTooLowException();
	}
	else
		signForm(br.getName(), true);
}

std::ostream& operator<<(std::ostream& os, const Form& obj)
{
	if (&obj == nullptr)
	{
		os << "FORM ERROR\n";
		return (os);
	}

	os << "FORM name: " << obj.getName() << std::endl
		<< "GRADE FOR SIGNING ... " << obj.getgradeSign() << std::endl
		<< "GRADE TO EXECUTE .... " << obj.getgradeExec() << std::endl
		<< "STATUS ...... " << (obj.getStatus() ? "is signed" : "not signed")
		<< std::endl;
	return (os);
}

const char *Form::GradeTooLowException::what() const throw ()
{
	return ("Grade: too low exception!");
}

const char *Form::GradeTooHighException::what() const throw ()
{
	return ("Grade: too high exception!");
}

std::string Form::getName() const
{
	return (this->name);
}

int Form::getgradeSign() const
{
	return (this->gradeSign);
}

int Form::getgradeExec() const
{
	return (this->gradeExec);
}

bool Form::getStatus() const
{
	return (this->isSigned);
}

Form::Form(const Form &obj) 
	: name(obj.name), gradeSign(obj.getgradeSign()), gradeExec(obj.getgradeExec()){}

Form& Form::operator= (const Form& obj) { return (*this); }
Form::~Form() { }