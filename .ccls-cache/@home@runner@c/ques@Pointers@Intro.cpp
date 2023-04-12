#include <iostream>
#include <math.h>
using namespace std;
int main() {
     int a,b;
     cin>>a>>b;
    int *ptr1,*ptr2;
    ptr1=&a;
    ptr2=&b;
    int sum= *ptr1+*ptr2;
    int sub= abs(*ptr1-*ptr2);
    cout<<sum<<"\n" <<sub;

}