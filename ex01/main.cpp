#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    try
    {
        Bureaucrat a("Jun", 1);
        Form f1("Form1", 1, 1);
        std::cout << a << std::endl;
        std::cout << f1 << std::endl;

        a.signForm(f1);
        std::cout << f1 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    try
    {
        Bureaucrat b("Hye", 150);
        Form f2("Form2", 1, 1);
        std::cout << b << std::endl;
        std::cout << f2 << std::endl;

        b.signForm(f2);
        std::cout << f2 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    try
    {
        Bureaucrat c("Invalid", 0);
        Form f3("Form3", 1, 1);
        std::cout << c << std::endl;
        std::cout << f3 << std::endl;

        c.signForm(f3);
        std::cout << f3 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    try
    {
        Bureaucrat d("Invalid", 151);
        Form f4("Form4", 1, 1);
        std::cout << d << std::endl;
        std::cout << f4 << std::endl;

        d.signForm(f4);
        std::cout << f4 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
