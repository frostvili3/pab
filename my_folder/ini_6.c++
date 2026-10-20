#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

int main()
{
    float r, l;
    cout << "input r, n: ";
    cin >> r >> l;
    float k = r * 2 * sqrt(3);
    l = l-k;
    int n = (l/(2*r))+1;
    float sum = (n*(n+1))/2;
    cout << sum;
    return 0;
}
//input 2 14
//output 3
//input 2 15
//output 6
//input 1 2
//output 0
//input 1 4
//output 1