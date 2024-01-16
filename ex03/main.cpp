#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"

int main()
{
    Intern intern;
    Bureaucrat b("b", 1);

    AForm *form1 = intern.makeForm("shrubbery creation", "home");
    form1->beSigned(b);
    form1->execute(b);
    if (form1)
        delete form1;

    AForm *form2 = intern.makeForm("robotomy request", "Bender");
    form2->beSigned(b);
    form2->execute(b);
    if (form2)
        delete form2;

    AForm *form3 = intern.makeForm("presidential pardon", "President");
    form3->beSigned(b);
    form3->execute(b);
    if (form3)
        delete form3;

    //if문 사용할 필요 없이 try-catch로 UnknownFormException이 잡힌다.
    AForm *form4 = intern.makeForm("nonexistent form", "target");
    if (form4)
        delete form4;

    return 0;
}

