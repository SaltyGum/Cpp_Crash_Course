#include <iostream>
#include <string>
#include <fstream>

void    search_replace(char **argv)
{
    std::string filename = argv[1];
	std::string s1(argv[2]);
	std::string s2(argv[3]);

    std::ifstream infile(filename.c_str());
    if (infile.good())
    {
        if (infile.peek() == std::ifstream::traits_type::eof())
            std::cout << "Empty file!!" << std::endl;
        else
        {
            std::ofstream outfile(filename.append(".replace").data());
            while (infile.good() && outfile.good())
            {
                std::string line;
                std::size_t found;
                std::getline (infile, line);
                found = line.find(s1, 0);
                while (found != std::string::npos)
                {
                    line.erase(found, s1.length());
                    line.insert(found, s2);
                    found = line.find(s1, found);
                }
                outfile << line;
                if (infile.eof())
                    break;
                outfile << std::endl;
            }
            infile.close();
            outfile.close();
        }
    }
    else
        std::cout << "Broken file or path" << std::endl;
}

int main( int argc, char **argv)
{
    if (argc == 4)
        search_replace(argv);
    else
        std::cout << "Wrong Args fella!\n Try Using Filename search_str replace_str Parameters" << std::endl;
    return (0);
}