#include <iostream>
using namespace std;
/*The statement “i&1” evaluates to true if and only if 
the “last bit in the binary form the variable ‘i’ is equal to ‘1;*/
int main (){
    
    int n;
    int flag=1;

    cin>>n;
    for(int i=2; i<n; i++){
        if(n%i== 0){flag=0;
        break;
        
    }
    }
    if(flag==0){cout<<"Prime nhi hai"<<endl;
    }
else{cout<<"Prime"}
    
        return 0;
     }
