#include <iostream>
using namespace std;
int main()
{  
    // For loop
    int n;
    cout<<"Enter the value of n\n";
    cin>> n;

    cout <<"Printing count from 1 to n"<<endl;
    for (int i = 1; i <=n; i++)
    {
    cout<< i<< endl;
    }
    
    //for loop with break
     
    cout<<"Enter the value of n\n";
    cin>> n;

    cout <<"Printing count from 1 to n"<<endl;
    int i = 1;
    for (; ; )
    {
        if(i<=n){cout<< i<< endl;}
        else{
            break;
        }
        i++;
        }

    

    

return 0;
}