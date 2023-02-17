#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int row=1;
    while(row<=n){
        int column=1;
        
        while(column<=row){
        cout<<(1+row+column-2)  <<" ";
        column =column+1;
        }
        cout<<endl;
        row=row+1;
    
    }

return 0;
}