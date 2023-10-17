#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
    try
    {
        Bureaucrat a("a", 135);
        Bureaucrat a2("a2", 146);
        ShrubberyCreationForm s("s");
        std::cout << std::endl;

        std::cout << a << std::endl;
        std::cout << a2 << std::endl;
        std::cout << s << std::endl;
        std::cout << std::endl;

        a.signForm(s);
        a2.signForm(s);
        std::cout << std::endl;

        s.execute(a);
        s.execute(a2);
        std::cout << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    //----------------------------------------------1
    try
    {
        Bureaucrat b("b", 44);
        Bureaucrat b2("b2", 73);
        RobotomyRequestForm r("r");
        std::cout << std::endl;

        std::cout << b << std::endl;
        std::cout << b2 << std::endl;
        std::cout << r << std::endl;
        std::cout << std::endl;

        b.signForm(r);
        b2.signForm(r);
        std::cout << std::endl;

        r.execute(b);
        r.execute(b2);
        std::cout << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
    //----------------------------------------------2
    try
    {
        Bureaucrat c("c", 4);
        Bureaucrat c2("c2", 26);
        PresidentialPardonForm p("p");
        std::cout << std::endl;

        std::cout << c << std::endl;
        std::cout << c2 << std::endl;
        std::cout << p << std::endl;
        std::cout << std::endl;

        c.signForm(p);
        c2.signForm(p);
        std::cout << std::endl;

        p.execute(c);
        p.execute(c2);
        std::cout << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    //----------------------------------------------3
    return 0;
}