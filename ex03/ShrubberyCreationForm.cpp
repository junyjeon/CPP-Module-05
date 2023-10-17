#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
{
	*this = other;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    if (this != &other)
        return *this;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : AForm(target, 145, 137) {}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
    if (executor.getGrade() > getExcGrade())
    {
        std::cout << executor.getName() << ", cannot execute " << getName() << " because ";
        throw GradeTooLowException();
    }
    std::ofstream ofs(getName() + "_shrubbery");
    if (!ofs)
        throw std::runtime_error("Cannot open file");
    ofs << "                       O\n"
           "                      ***\n"                        
           "                     **O**\n"                       
           "                    *******\n"                      
           "                   *********\n"                     
           "                  ***********\n"                   
           "                   ******o**\n"                     
           "                  ***********\n"                    
           "                 ****o********\n"                   
           "                ***************\n"                  
           "               ****o***o********\n"                 
           "              *******************\n"                
           "            ***********************\n"              
           "               *****O***********\n"                 
           "              **********o********\n"                
           "             ****************o****\n"               
           "            **O********************\n"              
           "           ***********o********O****\n"             
           "         *****************************\n"           
           "             *********************\n"               
           "            ***o*******************\n"              
           "           ***********o*******o*****\n"             
           "          ***************************\n"            
           "         ***********************O*****\n"           
           "        ***O***************************\n"          
           "      ***********************************\n"        
           "           *************************\n"             
           "          *******o********o**********\n"            
           "         *****************************\n"           
           "        **************o****************\n"          
           "       *************************O*******\n"         
           "      *****O*****************************\n"        
           "    **************o************************\n"      
           "          ***************************\n"            
           "         *************o***************\n"           
           "        ***********o*******************\n"          
           "       **************************O******\n"         
           "      ***o******************O************\n"        
           "    ***o***********o****************o******\n"      
           "                      ###\n"                        
           "                      ###\n"                        
           "                      ###\n"                        
           "                  ###########\n"                    
           "                  ###########\n";
    ofs.close();
}