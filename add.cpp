#include<iostream>
using namespace std;

class arithmatic
{
   public: 
   //characteristics
   int ino1;
   int ino2;
    //behaviour
    arithmatic()//default  constructer
    {
       cout<<"inside default constructer\n";
        ino1=0; 
        ino2=0;
    }
      arithmatic(int A,int B)//parameterised
      {
         cout<<"inside parameterized constructer\n";
         ino1=A;
         ino2=B;   
      }
      ~arithmatic()//destructer
      {
          cout<<"inside distructer\n";
      }

      int Addition()
      {
        int ians=0;
        ians=ino1+ino2;
        return ians;
      }
      int Substraction()
      {

      int ians=0;
        ians=ino1-ino2;
        return ians;
      }

};

        int main()
    {

               int ivalue1=0,ivalue2=0,iret=0;
               cout<<"enter first no";
               cin>>ivalue1;
               cout<<"enter second no ";
               cin>>ivalue2;


               arithmatic obj1;
               arithmatic obj2(ivalue1,ivalue2);
                 
                
                 iret=obj2.Addition();
                 cout<<"adition is"<<iret<<"\n";
                 iret=obj2.Substraction();
                 cout<<"substraction is"<<iret<<"\n";
         return 0;

}