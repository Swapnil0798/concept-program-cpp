#include<iostream>
using namespace std;
 class demo
 {
     public:
     void callvalue(int i)
     {
         i++;
     }
     void calladdress(int*p)
     {
         (*p)++;
     }
     void callref(int &ref)
     {
         ref++;
     }
 };



int main()
{
    
    int a=10,b=20,c=13;
    demo obj;
    obj.calladdress(&b);
    cout<<a<<"\n";
    obj.callref(a);
    cout<<b<<"\n";
    obj.callvalue(c);
    cout<<c<<"\n";
    return 0;
}