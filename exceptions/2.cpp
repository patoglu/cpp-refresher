#include <iostream>

class Trouble
{
public:
    Trouble()
    {
        char *baltaGirmemisHayvan = new char[9999999999999999];
        delete[] baltaGirmemisHayvan;
    }
};
int main()
{
    try
    {
        Trouble t;
    }
    catch(std::bad_alloc &e)
    {
        std::cerr << "Caught Exception:" << e.what() << '\n';
    }
    

    std::cout << "Hayatima kabus gibi coktun Korkut." << '\n';
    



}