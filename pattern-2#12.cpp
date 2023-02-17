#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int i=1;    //i-row
    while(i<=n){

        int j=1;    //j-column
        
        while (j<=n){
            cout<<i;
            j=j+1;
        }
            cout<< endl;
            i=i+1;
    }
    return 0;
}