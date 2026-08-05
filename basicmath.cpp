#include "basicmath.h"
float add(float a, float b)
{
    return a+b;
}
float subtract(float a, float b)
{
    return a-b;
}
float divide(float a, float b)
{
    return a/b;
}
float multiply(float a, float b)
{
    return a*b;
}

using namespace std;
#include <iostream>

float cal(float a, char o, float b)
{
    switch(o)
    {
        case '+':
        return add(a, b);
        break;
        case '-':
        return subtract(a, b);
        break;
        case '*':
        return multiply(a, b);
        break;
        case '/':
        return divide(a, b);
        break;
        default:
        cout<<"exist Command initiated";
        return 1;
        break;
    }

}