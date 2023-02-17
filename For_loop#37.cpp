#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<< "Enter the value of n"<< endl;
    cin>> n;

    int sum=0;
    for (int i=1; i<=n; i++)
    {
        sum+=i;
    }
    cout<<"Sum of n Numbers is:"<<" "<<sum<<endl;
    cout<<"\n";


    // Fibonacci Series(sum upto K)
    
    
    int k=10;
    cout<< "Enter the value of k"<< endl;
    cin>> k;

    int a=0;
    int b=1;
    cout<<a <<" "<<b<<" ";

    for (int i=1; i<=k; i++)
    {
    int nextNo =a+b;
    cout<< nextNo<<" ";
    a=b;
    b=nextNo;
    }
    

return 0;
}