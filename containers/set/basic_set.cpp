#include <iostream>
#include <set>
using namespace std;


class Test
{
public:
    Test() = default;
    
    Test(int no, const string& name):m_no(no),m_name(name)
    {
        
    }
    void print()const
    {
        cout << m_no << ", " << m_name << endl;
    }
    bool operator <(const Test& object) const
    {
        return m_no < object.m_no;
    }
    
private:
    int m_no;
    string m_name;
};
int main()
{
    set <int> numbers;
    numbers.insert(10);
    numbers.insert(20);
    numbers.insert(30);
    numbers.insert(40);
    numbers.insert(10);
    numbers.insert(20);
    numbers.insert(30);
    numbers.insert(40);
    
    for(auto it = numbers.begin() ; it != numbers.end(); it++)
    {
        cout << *it << endl;
    }
    
    auto itFind = numbers.find(30);
    
    if(itFind != numbers.end())
        cout <<"Found! " << *itFind << endl;
    else cout <<"Not found." << endl;
    
    
    if(numbers.count(30))
        cout <<"Number found." << endl;
    else cout <<"Not found." << endl;
    
    set<Test> tests;
    
    tests.insert(Test(10, "Mike"));
    tests.insert(Test(20, "Kylian"));
    tests.insert(Test(30, "Kepa"));
    tests.insert(Test(40, "Yun"));
    
    for(set<Test>::iterator it = tests.begin(); it != tests.end() ; it++)
    {
        it->print();
    }
    
    return 0;
}
