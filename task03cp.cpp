#include <iostream>
using namespace std;

bool isEven(int count);                         //function declaration


main()
{
    string word;
    cout<<"enter a word: ";                     //input from user
    cin>> word;
    int count=0;
    
    
    for(int idx=0; word[idx]!='\0'; idx++)      //loop to count characters
    {
        char letter=word[idx];
        count++;
    }

    cout<<isEven(count);                        //output  

}

bool isEven(int count)
{
    if(count%2==0)                              //if number of characters are even
    {
        return true;
    }
    else{                                       //if characters are odd
        return false;
    }
}




