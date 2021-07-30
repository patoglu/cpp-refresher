#include <iostream>


using namespace std;

class Parent
{
public:
    Parent() = default;
    Parent(const Parent& theObject):one(0)
    {
        cout << "Parent copy constructor." << endl;
        one = theObject.one;
    }
    
    virtual void print() const
    {
        cout << "Hello from parent." << endl;
    }
private:
    int one;
};

class Child : public Parent
{
public:
    Child() : two(0)
    {
        
    }
    
    virtual void print() const override
    {
        cout << "Hello from child." << endl;
    }
private:
    int two;
};
int main()
{
    Child c1;
    Parent &p1 = c1;
    //Make the print function non-virtual and you will see "Hello from parent" here
    //instead of "Hello from child."
    p1.print();
    Parent p2 = Child(); //upcasting.
    p2.print(); // Will print "hello from parent" and invoke parent's copy constructor.

    
    return 0;
}
