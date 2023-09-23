#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "GradeTooHighException.hpp"
#include "GradeTooLowException.hpp"

class Bureaucrat {
private:
	std::string name;
	int	grade;
public:
	Bureaucrat();
	Bureaucrat(const Bureaucrat &);
	Bureaucrat &operator=(const Bureaucrat &);
	~Bureaucrat();

	Bureaucrat(std::string const &, int grade);
	std::string const & getName() const;
	int const & getGrade() const;

	void GradeUp();
	void GradeDown();
};

std::ostream &operator<<(std::ostream &os, Bureaucrat const &bureaucrat);

#endif

//throw 키워드를 사용하여 예외를 발생시키는 것은, 예외 상황을 명시적으로 표현하고, 이를 적절하게 처리할 수 있도록 하는 데 있습니다.
//예외 상황에 대한 처리를 함수 외부로 이동시킬 수 있습니다. 이는 함수의 책임을 분리하고 코드의 가독성을 향상시키는 데 도움이 됩니다.

//[exception] https://cplusplus.com/reference/exception/exception/