#include<iostream>
using namespace std;

int main()
{
    int n;
    int a = 0, b= 1;

    cout<<"\n Enter number of terms in series u want : ";
    cin>>n;

    cout<<a<<" "<<b<<" ";

    for(int i = 1; i <= n; i++)
    {
        int sum = a + b;
        cout<<sum<<"  ";
        a = b;
        b = sum;
    }


    return 0;
}