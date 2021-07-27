#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    int elem;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; ++i)
    {
        cin >> elem;
        arr[i] = elem;
    }
    for(int i = 0 ; i < n ; ++i)
    {
        cout << arr[n - i - 1] << " ";
    }
    
    return 0;
}
