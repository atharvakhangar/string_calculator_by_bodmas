#include "complex.h"
#include "basicmath.h"

#include <iostream>
#include <string>
#include <stdbool.h>
using namespace std;

//smallest equation : it will locate and solve the smallest bracket per call
void smeq(string &n)
{
    int ob, cb, i;
    string d, t;
    for(cb=0;cb<size(n);cb++)
    {
        if(n[cb]=='(')
        ob=cb;
        if(n[cb]==')')
        break;
    }
    for(i=ob+1;i<cb;i++)
    {
        d+=n[i];
    }
    n.replace(ob, cb-ob+1, "$");
    sols(d);
    n.replace(ob, 1, d);
}

//bodmas opeaning test: it will return ture or false valuse based on input opertors presence
bool bot(string n, char o)
{
    int i;
    for(i=0;i<size(n);i++)
    {
       if(n[i]==o)
        return true;
    }
    return false;
}

//execuatble equation: it will search for operator and numbers around and solve them
void exeq(string &n, char o)
{
    int i=0, j=0, k=0, t;
    string p="";
    for(i=0;i<size(n);i++)
    {
        if(n[i]==o)
        break;
    }
    t=i;
    for(i=t-1;i>=0;i--)
    {
        if(i==0)
        {
            j=0;
        }
        else if(n[i]=='+' || n[i]=='-' || n[i]=='*' || n[i]=='/')
        {
            j=i+1;
            break;
        }
    }
    for(i=t+1;i<=size(n);i++)
    {
        if(i==size(n))
        {
            k=size(n)-1;
        }
        if(n[i]=='+' || n[i]=='-' || n[i]=='*' || n[i]=='/')
        {
            k=i-1;
            break;
        }
    }
    for(i=j;i<=k;i++)
    p+=n[i];
    n.replace(j, k-j+1, alot(p, o));
}

//alot: it alot numbericalls to float from stringa nd operators to char o so it can execute oprations
string alot(string &n, char o)
{
    string t;
    int i;
    float a, b;
    t.clear();
    for(i=0;i<size(n);i++)
    {
        if(isdigit(n[i]) || n[i]=='.')
        t+=n[i];
        else
        break;
    }
    a=stof(t);
    t.clear();
    for(i=i+1;i<size(n);i++)
    {
        if(isdigit(n[i]) || n[i]=='.')
        t+=n[i];
        else
        break;
    }
    b=stof(t);
    t.clear();
    t=con(cal(a, o, b));
    return t;
}

//calculate:it takes your numbers and opertor and provide you ans in string 
string con(float t)
{
    string k;
    k=to_string(t);
    return k;
}

//space terminator : check entire string and delete all spaces
void spter(string &n)
{
    int i;
    while(true)
    {
        if(bot(n,' '))
        {
            i=n.find(' ');
            n.replace(i, 1, "");
        }
        else
        break;
    }
}

//solve string: it takes string and solve it like dmas part of bodmas
void sols(string &n)
{
        while(true)
    {
        if(bot(n,'/'))
        exeq(n, '/');
        else if(bot(n,'*'))
        exeq(n, '*');
        else if(bot(n, '+'))
        exeq(n, '+');
        else if(bot(n, '-'))
        exeq(n, '-');
        else
        break;
    }
}