#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n \n";
    cin>>n;
    

    bool isprime=1;

    for(int i=2; i<n; i++){
        if(n%i== 0){
            isprime=0;
            break;
            
            }
    }
              
            if(isprime==0){
                
                cout<< n;  
                cout<< " is not a Prime Number"<<endl;
            }
            else{cout<< n; 
            cout<< " is a Prime Number"<<endl;}


    
return 0;
    }