#include<iostream>
using namespace std;
class demo
{
    public:
         int i;
          const int j;
    demo():j(20)
    {
       i=10;
    }

    demo(int a,int b):i(a),j(b)
    {
        cout<<"inside parameterised constructor \n";
    }

};

int main()
{
demo dobj(11,21);
   cout<<dobj.i<<"\n";
   cout<<dobj.j<<"\n";
    

    dobj.i++;
    cout<<dobj.i<<"\n";


    return 0;
}