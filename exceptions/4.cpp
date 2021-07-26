#include <iostream>
#include <exception>

void goesWrong()
{
    bool firstError = true;
    bool secondError = true;

    if(firstError)
    {
        throw std::bad_alloc();
    }
    if(secondError)
    {
        throw std::exception();
    }
}
int main()
{
    try
    {
        goesWrong();
    }
    catch(const std::bad_alloc& e)
    {
        std::cerr << "Catching bad alloc: "<<  e.what() << '\n';
    }
    catch(const std::exception& e)
    {
        std::cerr << "Priority is important!" << std::endl;
    }
    
    
}