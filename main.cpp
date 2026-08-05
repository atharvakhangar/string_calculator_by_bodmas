using namespace std;
#include<iostream>
#include<string>
#include<stdbool.h>

#include"basicmath.h"
#include"complex.h"
#include"checks.h"

int main()
{
    string c, b;
    cout<<"Input proper quation : \n";
    getline(cin, c);
    spter(c);
    if(checkeq(c)==1 || checkdeci(c)==1)
    {
        cout<<"\ninvaild input plz recheck";
    }
    else
    {
        while(true)
        {
        if(bot(c, '('))
        smeq(c);
        else 
        {
        sols(c);
        break;
        }
        }
        cout<<"Soultion to this equation is\n"<<c;
        cin>>b;
        return 0;
    }
}