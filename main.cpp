using namespace std;
#include<iostream>
#include<string>
#include<stdbool.h>
#include<conio.h>

#include"basicmath.h"
#include"complex.h"
#include"checks.h"
#include"unary-handler.h"
#include"mix.h"

int main()
{
    string c;
    cout<<"Input proper quation : \n";
    getline(cin, c);
    spter(c); //space terminator
    //the validation part
    if(checkeq(c)==1 || checkdeci(c)==1)
    {
        cout<<"\ninvaild input plz recheck";
        getch();
        return 1;
    }
    // the first operator solv
    {
        if(opserch(c) == 1)
        {
            cout<<"something has gone wrong";
            getch();
            return 1;
        }
    }
    //the main calculation part
    {
        while(true)
        {
            cout<<"\n"<<opserch(c)<<"\n";
            cout<<"Soultion to this equation is\n"<<c;
            if(mixchecksol(c))
            {
                if(bot(c, '('))
                    smeq(c);
                else 
                {
                    sols(c);
                }
            }
            else
                break;
            cout<<"\n"<<c<<"\n";
        }
        cout<<"Soultion to this equation is\n"<<c;
        getch();
        return 0;
    }
}