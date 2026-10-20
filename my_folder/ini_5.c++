#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;

int main()
{
    int h, m, s;
    cout<<"input hours, min, sec: ";
    cin>>h>>m>>s;
    int m_1 = m + round(s/60.0);
    int h_1 = h + round(m/60.0);
    cout<<h<<"h"<<" "<<m_1<<"min"<<' '<<"or"<<" "<<h_1<<"h";
    return 0;
}
//input 12 29 31
//output 12h 30min or 12h
//input 30 31 28
//output 30h 31min or 31h
//input 1 31 31
//output 1h 32min or 2h