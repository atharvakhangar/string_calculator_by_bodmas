using namespace std;
#include<string>
#include<iostream>

#include"unary-handler.h"
#include"complex.h"

//opserch: operator sercher it search for multiply able operator
int opserch(string &n)
{
    string t;
    int p=0;
    n.append(" ");
    int k=n.length()-1, i;
    for(i=0; i<k; i++)
    {
        if((n[i]=='+' || n[i]=='-' || n[i]=='*' || n[i]=='/' || n[i]=='.') && (n[i+1]=='+' || n[i+1]=='-' ||n[i+1]=='*' ||n[i+1]=='/' || n[i+1]=='.'))
        {
            if((n[i]=='*' && n[i+1]=='-') || (n[i]=='/' && n[i+1]=='-'))
            {
                t=opsol(n[i], n[i+1], p=i, n);
                n.replace(i+1, 2, t);
                i=-1;
                k=n.length()-1;
            }
            else
            {
                t=opsol(n[i], n[i+1], p=i, n);
                if(t == "error")
                    return 1;
                n.replace(i, 2, t);
                k=n.length()-1;
                i=-1;
            }
        }
    }
    n.pop_back();
    return 0;
}

//operator solver : it sloves the multi operator mess
string opsol(char a, char b, int i, string &n)
{
    if (a == '+' && b == '+')
        return "+";

    else if (a == '+' && b == '-')
        return "-";

    else if (a == '-' && b == '+')
        return "-";

    else if (a == '-' && b == '-')
        return "+";

    else if (a == '*' && b == '+')
        return "*";

    else if (a == '/' && b == '+')
        return "/";

    else if (a == '*' && b == '-')
    {
        minushift(n, i);
        return "*";
    }

    else if (a == '/' && b == '-')
    {
        minushift(n, i);
        return "/";
    }

    else
    {
        return "error";
    }
}

//minus shift: it will shift the minus sign at end for * and / operators in specific order
void minushift(string &n, int i)
{
    while(true)
    {
        i--;
        if(i == 0)
        {
            n.replace(i, 0, "-");
            break;
        }
        else if(n[i]=='+' || n[i]=='-' || n[i]=='*' || n[i]=='/' || n[i]=='(' || n[i]==')')
        {
            n.replace(i+1, 0, "-");
            break;
        }
    }
}