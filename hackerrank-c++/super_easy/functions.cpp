
#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d)
{
    int left_max, right_max, max;
    if(a <= b) {left_max = b;} else{left_max = a;}
    if(c <= d) {right_max = d;} else{right_max = c;}
    if(left_max <= right_max) {max = right_max;} else{max = left_max;}
    return max;
}
int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
