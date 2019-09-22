#include<iostream>
using namespace std;
int main()
{
 int a,b;
 cout<< "a= ";cin>>a; cout<<endl;
 cout<< "b= ";cin>>b; cout<<endl;

a ^= b;
b ^= a;
a ^= b;
 cout<< "uj a= "<<a<<endl;
 cout<< "uj b= "<<b<<endl;
}
