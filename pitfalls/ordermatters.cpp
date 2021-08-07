
#include <iostream>
#include <string>
using namespace std;

class Player
{
private:
    string m_jersey, m_first_name, m_last_name;
public:
    Player(string first_name, string last_name):
    m_first_name(first_name), m_last_name(last_name), m_jersey(m_first_name + " 9 " + m_last_name){};
    void print()const
    {
        cout << m_jersey << endl;
    }
};
int main()
{
    Player zlatan("Zlatan", "Ibrahimovic");
    zlatan.print();
}
