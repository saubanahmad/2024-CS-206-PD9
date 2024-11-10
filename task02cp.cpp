#include <iostream>
using namespace std;

main()
{
    string movies[5] = {"Gladiator", "StarWars", "Terminator", "TakingLives", "TombRider"};//string array for movie names
    string movieName;
    float price=500;
    float payable;


    cout<<"Enter movie name: ";
    cin>>movieName;

    for (int idx=0; idx<5; idx++)                                           //for checking array
    {
        if (movieName==movies[idx])                                         
        {
            if (idx%2==0)                                                   //condition for even index
            {
                payable= price-0.1*price;
            }
            else{
                payable= price- 0.05*price;                                 //condition for odd index
            }
        }
    }

    cout<<"Total payable price: Rs."<<payable<<endl;                        //output
    if (payable==0)
    {
        cout<<"Enter valid movie name.";                                    //invalid input of movie
    }
}

