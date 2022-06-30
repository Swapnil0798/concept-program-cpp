#include<iostream>
using namespace std;
class add
{
    public:
      int x,y;
      int z=0;
      int addition()
      {
      cout<<"enter the 1st no\n";
      cin>>x;
      cout<<"enter the 1st no\n";
      cin>>y;
      z=x+y;
      cout<<"addition is\n"<<z;
      }

       int mult()
      {
      cout<<"enter the 1st no\n";
      cin>>x;
      cout<<"enter the 1st no\n";
      cin>>y;
      z=x*y;
      cout<<"mult is\n"<<z;
    
      return z;
      }
      int mod()
      {
      cout<<"enter the 1st no\n";
      cin>>x;
      cout<<"enter the 1st no\n";
      cin>>y;
      z=x%y;
      cout<<"mod is\n"<<z;
    
      return z;
      }
      
      int div()
      {
      cout<<"enter the 1st no\n";
      cin>>x;
      cout<<"enter the 2nt no\n";
      cin>>y;
      z=x/y;
      cout<<"div is\n"<<z;
    
      return z;
      }
       
       
       
      
    
      };
       


int main()
{
    add obj;
    obj.div();
    obj.addition();
     obj.mult();
      obj.mod();
    return 0;
}