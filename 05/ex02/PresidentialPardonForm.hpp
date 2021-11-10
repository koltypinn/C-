#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm(std::string _name);
		PresidentialPardonForm(const PresidentialPardonForm &obj);

		PresidentialPardonForm& operator= (const PresidentialPardonForm& obj);

		void execute (Bureaucrat const & executor) const;
		~PresidentialPardonForm();
}; 

#endif
