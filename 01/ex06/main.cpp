#include "Harl.hpp"
#include <string>

void harlFilter(char **argv)
{
    int         i = 0;
    Harl        beta;
    std::string levels[4] =
    {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"
    };

    while (i < 4 && levels[i] != argv[1])
    {
        i++;
    }

    switch (i)
    {
    case 0:
        std::cout << "[ " << levels[0] << " ]" << std::endl;
        beta.complain(levels[0]);
        beta.complain(levels[1]);
        beta.complain(levels[2]);
        beta.complain(levels[3]);
        break;
    case 1:
        std::cout << "[ " << levels[1] << " ]" << std::endl;
        beta.complain(levels[1]);
        beta.complain(levels[2]);
        beta.complain(levels[3]);
        break;
    case 2:
        std::cout << "[ " << levels[2] << " ]" << std::endl;
        beta.complain(levels[2]);
        beta.complain(levels[3]);
        break;
    case 3:
        std::cout << "[ " << levels[3] << " ]" << std::endl;
        beta.complain(levels[3]);
        break;
    default:
        std::cout << "[ " << "Dont even know anymore" << " ]" << std::endl;
        break;
    }
}

int main( int argc, char **argv )
{
    switch (argc)
    {
    case 1:
        std::cout << "Probably thinking about the next insignificant complain" << std::endl;
        break;
    
    case 2:
        harlFilter(argv);
        break;

    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        break;
    }
}