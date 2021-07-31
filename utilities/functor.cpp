//https://stackoverflow.com/a/356993/10330277

#include <iostream>
#include <vector>
using namespace std;

struct Add
{
    Add(int val) : x(val)
    {
        
    }
    int operator ()(int y) const {return x + y;}
    
private:
    int x;
};
int main()
{
    Add add42(42);
    int i = add42(8);
    assert(i == 50);
    
    std::vector<int> in;
    in.push_back(1);
    in.push_back(1);
    in.push_back(2);
    in.push_back(3);
    in.push_back(5);
    in.push_back(8);
    in.push_back(13);
    in.push_back(21);
    i = 5;
    std::vector<int> out(in.size());
    
    std::transform(in.begin(), in.end(), out.begin(), Add(1));
    assert(out[i] == in[i] + 1); // for all i
    for(auto it = in.begin() ; it!=in.end() ; it++)
    {
        cout << *it << endl;
    }
    for(auto it = out.begin() ; it!=out.end() ; it++)
    {
        cout << *it << endl;
    }
    return 0;
}

