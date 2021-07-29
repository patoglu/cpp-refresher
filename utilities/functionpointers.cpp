
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool name_check(const string& name)
{
    return name[0] == 'Y';
        
}
int myCountIf(const vector<string>& list, bool (*name_check) (const string& name))
{
    int count = 0;
    for(int i = 0 ; i < list.size() ; ++i)
    {
        if(list[i][0] == 'Y') count++;
           
    }
    return count;
}
int main()
{
    
    vector <string> nameList;
    nameList.push_back("Yusuf");
    nameList.push_back("Yasin");
    nameList.push_back("Dennis");
    nameList.push_back("Yakup");
    nameList.push_back("Steve");
    nameList.push_back("Alan");
    nameList.push_back("Edsger");
    nameList.push_back("Yarmolenko");
    
    cout << count_if(nameList.begin(), nameList.end(),name_check) << endl;
    
    cout << myCountIf(nameList, name_check) << endl;
    
    return 0;
}
