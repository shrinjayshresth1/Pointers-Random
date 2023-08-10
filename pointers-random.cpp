#include<iostream>
using namespace std;
int main()
{
    int x=10;
    int *p;   //initialization//
    p=&x;
    cout<<x<<endl;
    cout<<&x<<endl; 
    cout<<p<<endl;
    cout<<&p<<endl;;
    cout<<*p<<endl; //dereferencing//
    return 0;
}
