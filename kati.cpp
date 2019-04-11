//mixed fractions 

#include <iostream>
using namespace std; 

int main()
{
    int numer, denom , count , rem; 
    
    cin >> numer;
    //cout << " / ";
    cin >> denom;
    //proper fraction 
    while(numer < denom )
    {
        cout << numer << " / " << denom << endl;
        break;
    }
    
    //inproper fraction
    while(numer > denom)
    {
        numer = numer - denom;
        count ++;
        if(numer <= denom)
        {
            cout << count<< " "<< numer << " / " << denom << endl;
            //return;
            break;
        }
        //return ;
        
    }
    if(numer == denom )
    {
        cout << numer << " / " << denom ;
        //return; 
    }
}