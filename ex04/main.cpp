#include <fstream>
#include <iostream>
#include <string>
#include <iterator>

int main(int ac, char **av)
{
    if(ac != 4)
    {
        std::cerr << " need filename and 2 strings  " << std::endl;
        return 1;
    }
    std::string file = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    if(s1.empty() || s2.empty())
    {
        std::cerr << " need filename and 2 strings  " << std::endl;
        return 1;  
    }
    std::ifstream infile(file.c_str());
    if(!infile.is_open())
    {
        std::cerr << "cannot open file" << std::endl;
        return 1;
    }
    std::string content((std::istreambuf_iterator<char>(infile)),
                        std::istreambuf_iterator<char>());
    infile.close();

    std::string result;    
    std::size_t start = 0;
    std::size_t pos = 0;
    while((pos = content.find(s1, start)) != std::string::npos)
    {
        result.append(content, start, pos - start);
        result.append(s2);
        start = pos + s1.length();
    }
    result.append(content, start, content.length() - start);
    
    std::string outname = file + ".replace";
    std::ofstream outfile(outname.c_str());
    
    if(!outfile.is_open())
    {
        std::cerr << "cannot open output file" << std::endl;
        return 1;
    }
    outfile << result;
    outfile.close();
    return 0;   
}