#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    try
    {
        Bureaucrat a("Jun", 1);
        std::cout << a << std::endl;

        Form f1("Form1", 1, 1);
        std::cout << f1 << std::endl;
        f1.beSigned(a);
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
        std::cout << b << std::endl;

        Form f2("Form2", 1, 1);
        std::cout << f2 << std::endl;
        f2.beSigned(b);
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
        std::cout << c << std::endl;

        Form f3("Form3", 1, 1);
        std::cout << f3 << std::endl;
        f3.beSigned(c);
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
        std::cout << d << std::endl;

        Form f4("Form4", 1, 1);
        std::cout << f4 << std::endl;
        f4.beSigned(d);
        std::cout << f4 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;
    return 0;
}
