#include <iostream>
using namespace std;
int main()
{
int n;
cin >> n;
int row=1; int num=1;
while(row<=n){
    int col=1, space=1;

    while(space<= n-row){
        cout<< "  "; //Note- Two Spaces
        space=space +1;
    }

    while (col<=row){
        cout<< num <<" ";
        num=num+1;
        col=col+1;
    }
    row=row+1;
    cout<<endl;
    
} 

return 0;
}