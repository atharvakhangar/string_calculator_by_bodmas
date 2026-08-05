#include <string>
#include <stdbool.h>
using namespace std;
#include <iostream>
#include "complex.cpp"
#include "basicmath.cpp"

int main()
{
    string k, l;
    getline(cin, l);
    exeq(l, '+');
    cout<<"\n"<<l;
    return 0;
}