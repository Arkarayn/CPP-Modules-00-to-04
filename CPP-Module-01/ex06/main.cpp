#include "Harl.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Usage: ./a.out <level>  (DEBUG, INFO, WARNING, ERROR)" << std::endl;
        return 1;
    }
    Harl harl;
    int level = 0;
    if(argv[1] == std::string("DEBUG"))
        level = 0;
    else if(argv[1] == std::string("INFO"))
        level = 1;
    else if(argv[1] == std::string("WARNING"))
        level = 2;
    else if(argv[1] == std::string("ERROR"))
        level = 3;
    else
       level = -1;
    harl.complain(level);
    return 0;
}