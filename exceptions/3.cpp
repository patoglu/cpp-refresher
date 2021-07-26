#include <iostream>
#include <exception>
class MyException : public std::exception
{
public:
    virtual const char* what() const throw()
    {
        return "Something bad happened.!";
    }
};

class Egg
{
public:
    void goesWrong() const
    {
        throw MyException();
    }
};

int main()
{
    Egg e;
    try
    {
        e.goesWrong();
    }
    catch(const MyException& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}