#include <iostream>
#include <string>

void mightGoWrong()
{
    bool error = false;
    bool anotherError = true;
    if(error)   
        throw "Something went wrong.";
    if(anotherError)
        throw std::string("Well, another error.");
}
int main()
{
    try
    {
        mightGoWrong();
    }
    catch(char const* e)
    {
        std::cerr << e << '\n';
    }
    catch(std::string &e)
    {
       std::cerr << e << '\n';
    }

    std::cout << "Still running." << std::endl;
    
    



    return 0;
}