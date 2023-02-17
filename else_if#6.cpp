#include <iostream>
using namespace std;
int main()
{
    char a;
    cout<<"Enter the values\n";
    cin>>a;

    if (a>= 'A' && a<= 'Z'){
        cout<<"This is a uppercase letter";
    }
    else if(a>='a' && a<= 'z'){
    cout<<"This is a lowercase letter";
    }
    else if(a>='0' && a<='9'){
    cout<<"This is a numeric character";
    }

return 0;
} 