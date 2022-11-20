#include<iostream>
using namespace std;
int main()
{
    int a[10];
    int sum=0;
    cout<<"enter 10 numbers:"<<endl;
    for(int i=0;i<=9;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
    }
    cout<<"sum of array is "<<sum;
    return 0;

}