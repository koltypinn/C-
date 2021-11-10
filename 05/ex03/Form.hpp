#ifndef FORM_HPP
# define FORM_HPP

# include "iostream"
# include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string name;
		const int gradeSign;
		const int gradeExec;
		bool isSigned;
		
		void check_grade(int &_grade) const;
	public:
		Form(std::string _name, int _grade_signed, int _grade_execute);
		Form(const Form &obj);
		Form& operator= (const Form& obj);

		virtual void execute (Bureaucrat const & executor) const = 0;

		std::string getName() const;
		int getgradeSign() const;
		int getgradeExec() const;
		bool getStatus() const;

		class GradeTooHighException : public std::exception
		{
			const char *what() const throw ();
		};

		class GradeTooLowException : public std::exception
		{
			const char *what() const throw ();
		};

		void beSigned(Bureaucrat &br);
		void signForm(std::string brname, bool result);
		virtual ~Form();
};

std::ostream& operator<<(std::ostream& os, const Form& obj);

#endif


