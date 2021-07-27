
#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/

class Student
{
public:
    Student() =  default;
    
    //setters.
    void set_age(int age)
    {
        m_age = age;
    }
    void set_standard(int standard)
    {
        m_standard = standard;
    }
    void set_first_name(string first_name)
    {
        m_first_name = first_name;
    }
    void set_last_name(string last_name)
    {
        m_last_name = last_name;
    }
    //getters
    int get_age()const
    {
        return m_age;
    }
    int get_standard()const
    {
        return m_standard;
    }
    string get_first_name()const
    {
        return m_first_name;
    }
    string get_last_name()const
    {
        return m_last_name;
    }
    string to_string()const
    {
        string r = std::to_string(m_age) + "," + m_first_name + "," + m_last_name + "," + std::to_string(m_standard);
        return r;
    }

private:
    string m_first_name;
    string m_last_name;
    int m_age;
    int m_standard;
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
