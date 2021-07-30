#include <iostream>
#include <vector>
using namespace std;

class ProtossUnit
{
public:
    virtual void tell_quote() const  = 0;
    virtual void attack() const = 0;
    
};

class Stalker : public ProtossUnit
{
public:
    virtual void tell_quote() const override
    {
        cout << "I'm here, in the shadows." << endl;
    }
    virtual void attack() const override
    {
        cout << "Stalker deals 20 damage" << endl;
    }
};

class DarkTemplar : public ProtossUnit
{
public:
    virtual void tell_quote() const override
    {
        cout << "Zerashk Gulida." << endl;
    }
    virtual void attack() const override
    {
        cout << "Dark templar deals 100 damage" << endl;
    }
};
class Carrier : public ProtossUnit
{
public:
    virtual void tell_quote() const override
    {
        cout << "Carrier has arrived." << endl;
    }
    virtual void attack() const override
    {
        cout << "Carrier's interceptor deals 25 damage" << endl;
    }
};

void act(const ProtossUnit& unit)
{
    cout << "Func beginnning" << endl;
    unit.tell_quote();
    unit.attack();
    cout << "Func end" << endl;
    
}


int main()
{
    DarkTemplar darkTemplar = DarkTemplar();
    darkTemplar.tell_quote();
    darkTemplar.attack();
    
    Stalker stalker = Stalker();
    stalker.tell_quote();
    stalker.attack();
    
    cout << endl;
    
    ProtossUnit* units[2];
    
    units[0] = &darkTemplar;
    units[1] = &stalker;
    
    for(int i = 0 ; i < 2 ; ++i)
    {
        units[i]->tell_quote();
        units[i]->attack();
    }
    
    
    act(*units[0]);
    act(*units[1]);
    
    cout << endl;
    
    act(darkTemplar);
    act(stalker);
    
    return 0;
}


