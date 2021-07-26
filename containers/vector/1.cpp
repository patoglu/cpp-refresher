#include <iostream>
#include <vector>
#include <string>

int main()
{
    std::vector <std::string> strings;
    strings.push_back("1");
    strings.push_back("2");
    strings.push_back("3");
    strings.push_back("4");
    strings.push_back("5");

    std::cout << "Classical way to iterate:" << std::endl;

    for(std::vector<std::string>::iterator it = strings.begin(); it != strings.end() ; ++it)
    {
        std::cout << *it << std::endl;
    }
    std::cout << "C++11 - 1" << std::endl;
    for(auto it = strings.begin() ; it != strings.end() ; ++it)
    {
        std::cout << *it << std::endl;
    }
    std::cout << "C++11 - 2" << std::endl;
    for (const auto & element : strings) {
        std::cout << element << std::endl;
}



    return 0;
}
