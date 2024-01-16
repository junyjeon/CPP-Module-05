#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
    std::cout << "--01--" << std::endl;
    try
    {
        Bureaucrat a("a", 137);
        Bureaucrat a2("a2", 145);
        std::cout << a << std::endl;
        std::cout << a2 << std::endl;
        std::cout << std::endl;

        ShrubberyCreationForm s("s"); // g145 e137
        std::cout << s << std::endl;
        std::cout << std::endl;

        s.beSigned(a);
        s.beSigned(a2);
        std::cout << s << std::endl;

        // s.execute(a);
        s.execute(a2);
        std::cout << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;

    std::cout << "--02--" << std::endl;
    try
    {
        Bureaucrat b("b", 45);
        Bureaucrat b2("b2", 72);
        RobotomyRequestForm r("r"); // g72 e45
        std::cout << std::endl;

        std::cout << b << std::endl;
        std::cout << b2 << std::endl;
        std::cout << r << std::endl;
        std::cout << std::endl;

        r.beSigned(b);
        r.beSigned(b2);
        std::cout << r << std::endl;
        std::cout << std::endl;

        // r.execute(b);
        r.execute(b2);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;

    std::cout << "--03--" << std::endl;
    try
    {
        Bureaucrat c("c", 5);
        Bureaucrat c2("c2", 25);
        PresidentialPardonForm p("p"); // g25 e5
        std::cout << std::endl;

        std::cout << c << std::endl;
        std::cout << c2 << std::endl;
        std::cout << p << std::endl;
        std::cout << std::endl;

        p.beSigned(c);
        p.beSigned(c2);
        std::cout << p << std::endl;

        // p.execute(c);
        p.execute(c2);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
