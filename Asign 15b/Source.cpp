/*
Taylor Jones
21.FA.CIS.1202.502
12/05/2021
*/

#include<iostream>
using namespace std;

//Template
template <class T>

//Function half
T half(T value) 
{
    T halfValues;

    //Double and float are half the value
    halfValues = value / 2;

    //Integar return half the value rounded 
    if (*typeid(value).name() == 'i') 
    {
        halfValues * 2;
        halfValues++;
    }
    else {
    return halfValues;
    }
}

//Main Function
int main()
{
    //Tests
    double a = 7.0;
    float b = 5.0f;
    int c = 3;

    cout << half(a) << endl;
    cout << half(b) << endl;
    cout << half(c) << endl;
}