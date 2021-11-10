#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# include <cstdlib>

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm(std::string _name);
		RobotomyRequestForm(const RobotomyRequestForm &obj);

		RobotomyRequestForm& operator= (const RobotomyRequestForm& obj);

		void execute (Bureaucrat const & executor) const;
		~RobotomyRequestForm();
}; 

#endif
