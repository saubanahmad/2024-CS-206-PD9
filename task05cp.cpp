#include <iostream>
using namespace std;

bool check(string array[]);                         //function declaration

main()
{

    string array[4];                                //array declaration
    for (int idx=0; idx<4; idx++)                   //input in array from user
    {
        cout<<"Enter element "<<idx+1<<" : ";
        cin>> array[idx];
    }
    
    
    cout<< check(array);                            //output
}

bool check(string array[])
{
    bool truth=true;
    for (int x=1; x<4; x++)                         //to check if all elements are same as first one
    {
        string first=array[0];
        if(first!=array[x]) 
        {
            truth= false;
        }
    }
    return truth;
}