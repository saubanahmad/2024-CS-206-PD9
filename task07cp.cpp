#include <iostream>
using namespace std;
main()
{
    string arr[2];                                  //array for taking strings
    for(int idx=0; idx<2; idx++)                    //loop for input in array
    {
        cout<<"Enter the string: ";
        cin>>arr[idx];
    }
    string s1=arr[0];
    string s2=arr[1];
    int count=0;

    for(int i=0; s1[i]!='\0'; i++)                  //outer loop for checking matching characters
    {
        for(int j=0; s2[j]!='\0'; j++)              //inner loop checking matching characters
        {
            if(s1[i]==s2[j])                        //matching condition
            {
            s2[j]='1';                              //replacing counted character by 1 so it may not be counted again            
            count++;
            break;                                  //breakpoint so the loop breaks without checking whole string 
            }
        }
    }
    cout<<count<<endl;                              //displaying output
    
}