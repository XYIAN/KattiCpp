/*
 */
#include <iostream>
using namespace std;



int main()
{
    int radius[20] ; 
    int input, cups, min, max, count; 
    string colors[20]; 
    cups = 0 ; 
    max = radius[0];
    min = radius[0];
    string output[20];

    if(cups>1 && cups < 20 )
    {
        
        for(int i =0 ; i < cups;i++)
        {
            cin >> colors[i] >> radius[i] ; 
            cups++; 
        }
        for(int j = 0 ; j < cups; j++)
        {
            
            if(radius[j]<radius[j+1])
            {
                max = radius[j+1];
                output[count+1]= color[i];
                count++;
                
            }
            if(radius[j]> radius[j+1])
            {
                min = radius[j+1];
                output[count] = colors[j] ; 
                count++; 
            }
            
            
        }
        
    }
    
    for(int i = 0 ; i < cups+1; i++)
    {
        cout << output[i] << endl; 
    }

    
}