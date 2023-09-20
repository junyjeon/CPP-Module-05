#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat {
private:
	std::string name;
	int	grade;
public:
	Bureaucrat();
	Bureaucrat(const Bureaucrat &);
	Bureaucrat &operator=(const Bureaucrat &);
	~Bureaucrat();

	Bureaucrat(std::string const &name);
	std::string const & getName(); const;
	int const & getGrade(); const;
};

#endif
