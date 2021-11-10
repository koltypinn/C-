#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm(std::string _name);
		ShrubberyCreationForm(const ShrubberyCreationForm &obj);

		ShrubberyCreationForm& operator= (const ShrubberyCreationForm& obj);

		void execute (Bureaucrat const & executor) const;
		~ShrubberyCreationForm();
}; 

#endif
