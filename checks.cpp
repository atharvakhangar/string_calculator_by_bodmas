using namespace std;
#include<string>
#include<iostream>
#include "checks.h"
#include<cctype>

//check string: its job is to find typo in the equation and return error code 1 if it has any invaild format
int checkeq(string n)
{
    int i;
    if(n[0]=='*' || n[0]=='/')
    return 1;
    else if(n=="+" || n=="-" || n=="*" || n=="/" || n=="(" || n==")")
    return 1;
    n+=' ';
    for(i=0;i<size(n)-1;i++)
    {
        if((n[i]=='+' || n[i]=='-' || n[i]=='*' || n[i]=='/' || n[i]=='.') && (n[i+1]=='+' || n[i+1]=='-' ||n[i+1]=='*' ||n[i+1]=='/' || n[i+1]=='.'))
        return 1;
        if(n[i]!='+' && n[i]!='-' && n[i]!='*' && n[i]!='/' && n[i]!='.' && n[i]!=' ' && !isdigit(n[i]) && n[i]!='(' && n[i]!=')')
        return 1;
    }
    return 0;
}

//check decimal: its job is to check is decimal point are representing number or version(lol), ex it will eleminate 2.3.4 etc
int checkdeci(string n)
{
    int c=0;
    int i, j;
    for(i=0;i<size(n);i++)
    {
        if(isdigit(n[i]))
        {
            while(true)
            {
                if(n[i]=='.')
                c++;
                if(c==2)
                return 1;
                if(n[i]=='+' || n[i]=='-' || n[i]=='*' || n[i]=='/')
                {
                    c=0;
                    break;
                }
                if(i==size(n)-1)
                break;
                i++;
            }
        }
    }
    return 0;
}

//check open bracket: checks open bracket and if there is no operator
void checkob(string &n)
{
    
}
