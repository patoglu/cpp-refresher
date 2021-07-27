
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, numberOfQueries, k, elem, junk, target;
    cin >> n >> numberOfQueries;
    vector<vector<int> > arrays;
    
    for(int i = 0 ; i < n ; ++i)
    {
        vector<int> array;
        cin >> k;
        for(int j = 0 ; j < k ; ++j)
        {
            cin >> elem;
            array.push_back(elem);
        }
        arrays.push_back(array);
    }
    for(int i = 0 ; i < numberOfQueries ; ++i)
    {
        cin >> junk;
        cin >> target;
        cout << arrays[junk][target] << endl;
    }
    
    return 0;
}
