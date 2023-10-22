#include "Intern.hpp"

int main()
{
    Intern intern;

    AForm *form1 = intern.makeForm("shrubbery creation", "home");
    if (form1)
        delete form1;

    AForm *form2 = intern.makeForm("robotomy request", "Bender");
    if (form2)
        delete form2;

    AForm *form3 = intern.makeForm("presidential pardon", "President");
    if (form3)
        delete form3;

    AForm *form4 = intern.makeForm("nonexistent form", "target");
    if (form4)
        delete form4;

    return 0;
}