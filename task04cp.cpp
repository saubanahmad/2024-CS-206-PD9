#include <iostream>
using namespace std;

main()
{
    int n;
    int arr[n];
    int idx;

    cout<<"Enter the size of array: ";
    cin>>n;

    for(int idx=0; idx<n; idx++)                        //loop to take input
    {
        cout<<"Enter integer "<<idx+1<<": ";
        cin>>arr[idx];

    }

    string output;
    for(int x=0; x<n; x++)                              //loop for checking 7
    {
        while(arr[x]!=0)
        {
            if(arr[x]%10==7)
            {
                output="boom!";
                break;
            }
            
            arr[x]=arr[x]/10;
        }        
    }
    if(output!="boom!")                                 //if there is no 7
    {
        output="there is no 7 in the array.";
    }
    cout<< output;                                      //output

}


