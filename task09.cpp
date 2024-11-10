#include <iostream>
using namespace std;

main()
{
    string arr[10]={"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};
    char pin[4];                                //to take PIN from user
    cout<<"Enter four digit PIN: ";
    for(int n=0; n<4; n++)                      //array input
    {
        cin>>pin[n];
        
    }
    int dig[4];                                 //to convert char array to int array 
    for(int x=0; x<4; x++)                      //loop that converts ascii value to actual int 
    {
        dig[x]=pin[x]-48;
    }
    int num;                                    //finding index of dance
    if (dig[0]>=0 && dig[0]<=9 && dig[1]>=0 && dig[1]<=9 && dig[2]>=0 && dig[2]<=9 && dig[3]>=0 && dig[3]<=9 && num<=9999)  //condition to check validity of input
    {
        for(int i=0; i<4; i++)
        {
            num= (dig[i]+i)%10;                 //finding index of dance
            cout<<arr[num]<<endl;               //printing dance move 
        }
    }
    else{                                       //invalid input
        cout<<"Invalid input.";                 
    }
    

    
    
}