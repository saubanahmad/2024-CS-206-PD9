#include <iostream>
using namespace std;
main()
{
    string fruit[4]={"peach", "apple", "guava", "watermelon"};  //string  array for storing fruit names
    float price[4]={60, 70, 40, 30};                            //float array for storing prices
    float quantity;                                               
    float totalPrice;
    string fruitname;
    cout<<"Enter the name of fruit: ";                          //input from user
    cin>>fruitname; 

    cout<<"Enter quantity in kg: ";                             //input from user
    cin>>quantity;
    for(int idx=0; idx<4; idx++)                                //loop for checking fruit 
    {
        if(fruitname==fruit[idx])                               //checking the index for that fruit
        {
            totalPrice= quantity*price[idx];                    //calculating total price
        }
    }
    cout<<"Total price: "<<totalPrice;                          //output of total price 
    if (totalPrice==0)
    {                                                           //invalid input
        cout<<"Enter valid fruit name or quantity."<<endl; 
    }
}