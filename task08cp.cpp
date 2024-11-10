#include <iostream>
using namespace std;
main()
{
    
    int n;                                              //size off array
    cout<<"Enter number of patterns: ";                 //taking input from user of size
    cin>>n;
    string col[n];
    for(int idx=0; idx<n; idx++)                        //taking colors input in array
    {
        cout<<"Enter color: ";
        cin>>col[idx];
    }
    int count=0;                                        //no. of times color changed
    for(int i=0; i<n-1; i++)                            //checking if color is changed
    {
        if(col[i]!=col[i+1])
        {
            count++;
        }
    }
    int time;                                           //total time
    time= count + n*2;                                  //total time= number of times color changed*1 + total patterns*2
    cout<<"Total time: "<<time<<" secs";


}