#include <iostream>
using namespace std;

main()
{
    int arr[3];
    for(int idx=0; idx<3; idx++)                        //taking input in array
    {
        cout<<"enter elements: ";
        cin>>arr[idx];
    }
    int t;
    cout<<"transformation need to be done: ";           //taking no of times transformation  will work
    cin>>t;
    
    for (int x=0; x<3; x++)                             //loop for checking wheter element is even or odd
    {
        if (arr[x]%2==0)                                //even
        {
            int element=arr[x];
            for(int y=0; y<t; y++)                      //loop for transformation (Subtracts two (-2) to each even integer)
            {
                element=element-2;                      
            }
            cout<<element<<endl;
        }
        else                                            //odd (arr[x]%2!=0)
        {
           int element=arr[x];
            for(int y=0; y<t; y++)                      //loop for transformation (Adds two (+2) to each odd integer)
            {
                element=element+2;
            }
            cout<<element<<endl; 
        }
    }
}