#include <iostream>

int main(void)
{
    std::string         brain = "HI THIS IS BRAIN";
    std::string         *stringPTR = &brain;
    std::string         &stringREF = brain;


    std::cout << "OG String Address   - " << &brain << std::endl;
    std::cout << "String Ptr Address  - " << stringPTR << std::endl;
    std::cout << "String Ref Address  - " << &stringREF << std::endl;

    std::cout << "OG String Value   - " << brain << std::endl;
    std::cout << "String Ptr Value  - " << *stringPTR << std::endl;
    std::cout << "String Ref Value  - " << stringREF << std::endl;
    return (0);
}
