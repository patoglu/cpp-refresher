#include <iostream>
#include <vector>
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

void byValue(const Parent parent)
{
    parent.print();
}

void byReference(const Parent& parent)
{
    parent.print();
}
int main()
{
    Child c1;
    Parent &p1 = c1;
    //Make the print function non-virtual and you will see "Hello from parent" here
    //instead of "Hello from child."
    p1.print();
    Parent p2 = Child(); //upcasting.
    p2.print(); // Will print "hello from parent" and invoke parent's copy constructor.

    Child funcTest;
    
    byValue(funcTest); //you get slicing with call by value.
     
    byReference(funcTest); //it's fine with call by reference.
    
    
    vector<Parent> v;
    v.push_back(Parent());
    v.push_back(Child());
    
    for(const auto& element : v)
    {
        cout << "I am sliced: ";
        element.print();
    }
    
    vector<Parent*> v_p;
    
    //In this case we won't able to assign anonymous objects.
    
    Parent parent;
    Child child;
    
    v_p.push_back(&parent);
    v_p.push_back(&child);
    
    for(const auto* element: v_p)
    {
        cout << "I am not sliced: ";
        element->print();
    }
    
    
    return 0;
}
