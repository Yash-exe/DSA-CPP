#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int row=1;
    while(row<=n){
        int col=1, space=1;
        
        while(space<row){
            cout<<" "; // print space
            space=space+1; 
        }

        while(col<=n-row+1){
            cout<< col ;
            col=col+1;
        }
        cout <<endl;
        row=row+1;
        

        }

    
return 0;
}