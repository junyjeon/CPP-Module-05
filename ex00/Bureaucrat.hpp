#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat
{
private:
	const std::string name;
	int grade;

	Bureaucrat();
	Bureaucrat(const Bureaucrat &);
	Bureaucrat &operator=(const Bureaucrat &);

public:
	~Bureaucrat();
	Bureaucrat(std::string const &, int);
	std::string const &getName() const;
	int getGrade() const;

	void GradeUp();
	void GradeDown();

	class GradeTooHighException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return "Grade too high!";
		}
	};
	class GradeTooLowException : public std::exception
	{
	public:
		const char *what() const throw()
		{
			return "Grade too low!";
		}
	};
};

std::ostream &operator<<(std::ostream &, Bureaucrat const &);

#endif
