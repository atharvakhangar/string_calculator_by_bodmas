using namespace std;
#include<iostream>
#include<string>
#include<cctype>
#include<stdbool.h>

#include "mix.h"


//check solvable : it checks is the equation solvable by checking presence of 2 numbers and a opretaor
bool mixchecksol(string n)
{
    string t;
    int i,j;
    string a, b;
    t.clear();
    for(i=0;i<size(n);i++)
    {
        if(n[i]=='(');
        if(n[i]=='-' || n[i]=='+')
        t+=n[i];
        else if(isdigit(n[i]) || n[i]=='.')
        {
            t+=n[i];
            if(!isdigit(n[i+1]) && n[i+1]!='.')
                break;
        }
    }
    j=i;
    a=t;
    t.clear();
    for(i=i+2;i<size(n);i++)
    {
        if(n[i]=='+' || n[i]=='-' || n[i]=='*' || n[i]=='/')
        break;
        t+=n[i];
    }
    b=t;
    // cout<<"\nA="<<a<<"\nB="<<b<<"\nop="<<n[j+1];
    if(a!="" && b!="")
    return true;
    return false;
}