#include <iostream>
#include <map>
#include <string>

int main()
{
    std::map<std::string, int> ages;

    ages["Yusuf"] = 24;
    ages["Salih"] = 17;
    ages["Enes"] = 11;

    ages["Yusuf"] = 25; //Overrides it

    std::cout << ages["Yusuf"] << std::endl;

    std::cout << ages["Maniac"] << std::endl; //The map doesn't contain the key. In this case it will automatically add a key to the map with key value null.
    std::cout << ages["Int"] << std::endl; //The map doesn't contain the key. In this case it will automatically add a key to the map with key value null.


    if(ages.find("Salih") != ages.end())
    {
        std::cout << "Found Salih" << std::endl;
    }
    std::cout << "Size is: " << ages.size() << std::endl;

    for(auto it = ages.begin() ; it != ages.end() ; ++it)
    {
        std::cout <<"[ " << it->first << ", " << it->second << " ]" << std::endl;
    }

    for(auto it = ages.begin() ; it != ages.end() ; ++it)
    {
        std::pair<std::string, int> age = *it;
        std::cout <<"[ " << age.first << ", " << age.second << " ]" << std::endl;
    }
    return 0;
}
