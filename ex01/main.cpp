#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    std::cout << "--01--" << std::endl;
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

    std::cout << "--02--" << std::endl;
    try
    {
        Bureaucrat b("Hye", 150);
        std::cout << b << std::endl;

        Form f2("Form2", 149, 149);
        std::cout << f2 << std::endl;
        f2.beSigned(b);
        std::cout << f2 << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;

    return 0;
}
