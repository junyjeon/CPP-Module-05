#include "Bureaucrat.hpp"

int main(void)
{
    try {
        Bureaucrat a("Jun", 1);
        std::cout << a << std::endl;

        a.GradeUp();
        std::cout << a << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    try {
        Bureaucrat b("Hye", 150);
        std::cout << b << std::endl;

        b.GradeDown();
        std::cout << b << std::endl;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    try {
        Bureaucrat c("Invalid", 0);
    } catch (std::exception &e) {
        std::cout << "Failed to create bureaucrat: " << e.what() << std::endl;
    }

    try {
        Bureaucrat d("Invalid", 151);
    } catch (std::exception &e) {
        std::cout << "Failed to create bureaucrat: " << e.what() << std::endl;
    }

    return 0;
}