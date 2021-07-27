
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int _int;
    long _long;
    char _char;
    float _float;
    double _double;
    
    scanf("%d %ld %c %f %lf", &_int, &_long, &_char, &_float, &_double);
    printf("%d\n%ld\n%c\n%f\n%lf\n", _int, _long, _char, _float, _double);
    return 0;
}
