#include <iostream>
using namespace std;
int main()
{
    int a=4;
    int b=6;

    cout<<" a&b "<< (a&b) <<endl;
    cout<<" a|b " << (a|b) <<endl;
    cout<<" ~a " << ~a <<endl;
    cout<<" a^b \n " << (a^b) <<endl;

    cout<< (17>>1)<<endl;
    cout<< (17>>2)<<endl;
    cout<< (19<<1)<<endl;
    cout<< (21<<2) <<endl;

    //
    cout<<"\n";

    int i=5;

    cout<< (++i)<< endl;
    //6
    cout<< (i++)<<endl;
    //6, i=7
    cout<<(i--)<<endl;
    //7,i=6
    cout<<(--i)<<endl;
    //5,i=5





return 0;
}