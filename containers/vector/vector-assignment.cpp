#include <iostream>
#include <vector>
using namespace std;

void print(const vector<int>& v)
{
    for(auto it = v.begin() ; it!=v.end() ; ++it)
    {
        cout << *it << endl;
    }
}
int main()
{
    vector<int> v1;
    vector<int> v2;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v2 = v1; // Deep copy.
    print(v2);
    v1.pop_back();
    print(v2);//Not shallow copy.
    
}
