#include "Bureaucrat.hpp"

int main(void)
{
    std::cout << "--01--" << std::endl;
    try
    {
        Bureaucrat a("Jun", 1);
        std::cout << a << std::endl;
        std::cout << a.getGrade() << std::endl;

        a.GradeDown();
        std::cout << a.getGrade() << std::endl;
        a.GradeUp();
        std::cout << a.getGrade() << std::endl;
        a.GradeUp();
        std::cout << a.getGrade() << std::endl;
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

        b.GradeDown();
        std::cout << b << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;

    std::cout << "--03--" << std::endl;
    try
    {
        Bureaucrat c("Invalid", 0);
        std::cout << "---" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;

    std::cout << "--04--" << std::endl;
    try
    {
        Bureaucrat d("Invalid", 151);
        std::cout << "---" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
