#include "Harl.hpp"

int main( void )
{
    Harl beta;

    std::cout << "DEBUG: " << std::endl;
    beta.complain("DEBUG");
    std::cout << "INFO: " << std::endl;
    beta.complain("INFO");
    std::cout << "WARNING: " << std::endl;
    beta.complain("WARNING");
    std::cout << "ERROR: " << std::endl;
    beta.complain("ERROR");
}