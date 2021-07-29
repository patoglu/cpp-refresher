#include <iostream>
#include <map>
using namespace std;

class Person
{
public:
    Person() = default;
    Person(const string& name, int age):m_name(name), m_age(age)
    {
        
    }
    Person(const Person& object):m_age(object.m_age), m_name(object.m_name)
    {
        cout << "Copy constructor activated." << endl;
    }
    void print()const
    {
        cout << m_name << ": " << m_age << endl;
    }
    
    bool operator <(const Person& other)
    {
        return m_name < other.m_name;
    }
    
private:
    string m_name;
    int m_age;
};

int main()
{
    map<int, Person> people;
    
    people[0] = Person("Mike", 40);
    people[1] = Person("Vicky", 30);
    people[30]  = Person("Raj", 20);
    
   
    
    cout << "Now copy constructor will run." << endl;
    
    people.insert(make_pair(55,Person("Ali", 10)));
    people.insert(make_pair(56, Person("Veli", 11)));
    for(map<int, Person>::iterator it = people.begin() ; it != people.end(); it++)
    {
        cout << "Value: ";
        cout << it->first;
        cout << "Key: ";
        it->second.print();
    }
}
