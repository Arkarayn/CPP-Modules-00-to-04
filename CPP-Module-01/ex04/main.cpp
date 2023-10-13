#include <fstream>
#include <iostream>
#include <string>

#include <string>

std::string replace(const std::string& line, const std::string& s1, const std::string& s2)
{
    std::string result;
    size_t pos = 0;
    size_t foundPos;

    while ((foundPos = line.find(s1, pos)) != std::string::npos)
    {
        result += line.substr(pos, foundPos - pos);
        result += s2;
        pos = foundPos + s1.length();
    }
    result += line.substr(pos);
    return result;
}


int main(int argc, char **argv)
{
    if(argc != 4)
    {
        std::cout << "Wrong number of arguments!" << std::endl;
        std::cout << "\nUsage: ./replace <filename> <string1> <string2>\n" << std::endl;
        return 1;
    }
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];

    filename += ".txt";
    std::ifstream ifs(filename);
    if (ifs.is_open())
    {
        if (s1.empty() || s2.empty())
        {
            std::cout << "Error: empty string" << std::endl;
            return 1;
        }
        std::string line;
        std::string new_line;
        std::ofstream ofs(filename + ".replace");
        if (ofs.is_open())
        {
            while (std::getline(ifs, line))
            {
                ofs << replace(line, s1, s2);
                if (!ifs.eof())
                    ofs << std::endl;
            }
            ifs.close();
            ofs.close();
        }
        else
        {
            std::cout << "Error: could not open file" << std::endl;
            return 1;
        }
    }
    else
    {
        std::cout << "Error: could not open file" << std::endl;
        return 1;
    }

    return 0;
}