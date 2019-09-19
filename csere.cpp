#include<iostream>
using namespace std;
int main()
{
    int a,b;

    cout<<"a= ";cin>>a;cout<<endl;
    cout<<"b= ";cin>>b;cout<<endl;

    b=a-b;
    a=a-b;
    b=a+b;

     cout<<" uj a= ";cout<<a<<endl;
    cout<<" uj b= ";cout<<b<<endl;
}
