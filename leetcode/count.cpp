#include <iostream>
#include <set>
#include <string>
using namespace std;

bool divisibility_check(const string& s)
{
    int sum = 0;
    for(int i = 0 ; i < s.size() ; ++i)
    {
        sum += s[i] - '0';
    }
    if(sum % 3 == 0)
        return true;
    return false;
}
int main()
{
    std::set<string> divisible_list;
    int j;
    string s = "00081";
    string compare_str = s;
    for(int i = 0 ; i < s.size() ; ++i)
    {
        //cout << s << "imba" << endl;
        char restore = s[i];
        if(i == 0)
        {
           j = 1;
        }
        else{j  =  0;}
        for(int b = j ; b <= 9 ; ++b)
        {
            std::string str = std::to_string(b);
            s[i] = str[0];
            if(divisibility_check(s) )
            {
                cout << "Stringe bak" << s<< endl;
               divisible_list.insert(s);
            }
        }
        s[i] = restore;
    }


    for (auto it = divisible_list.begin(); it !=
                             divisible_list.end(); ++it)
        cout << ' ' << *it;

    return 0;
}