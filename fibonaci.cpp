#include<iostream>
using namespace std;
int main()
{
    int i=1;
    int num=1;
    int nest=0;
    for(int h=0;h<=10;h++)
    {
        cout<<num<<'\t';
        num=num+nest;
        nest=i;
        i=num;

    }
    return 0;
}