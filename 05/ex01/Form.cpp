#include "Form.hpp"

void Form::check_grade(int &_grade) const
{
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

Form::Form(std::string _name, int _grade_signed, int _grade_execute)
	: name(_name), gradeForSigning(_grade_signed), gradeToExecute(_grade_execute)
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
		std::cout << brname << " can't sign " << this->name 
			<< " because he's a goof\n";
}

void Form::beSigned(Bureaucrat &br)
{
	if (br.getGrade() > this->gradeForSigning)
	{
		signForm(br.getName(), false);
		throw Form::GradeTooLowException();
	}
	else
		signForm(br.getName(), true);
}

std::ostream& operator<<(std::ostream& os, const Form& obj)
{
	os << "FORM name: " << obj.getName() << std::endl
		<< "GRADE FOR SIGNING ... " << obj.getGradeForSigning() << std::endl
		<< "GRADE TO EXECUTE .... " << obj.getGradeToExecute() << std::endl
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

int Form::getGradeForSigning() const
{
	return (this->gradeForSigning);
}

int Form::getGradeToExecute() const
{
	return (this->gradeToExecute);
}

bool Form::getStatus() const
{
	return (this->isSigned);
}

Form::Form(const Form &obj) 
	: name(obj.name), gradeForSigning(obj.getGradeForSigning()), gradeToExecute(obj.getGradeToExecute()){}

Form& Form::operator= (const Form& obj) { return (*this); }

Form::~Form() { }