#include<iostream>
using namespace std;

int main()
{
    int input=0;
    enum days{sun,mun,tue,thus,sat,fri};
   
    enum days obj;
    obj=tue;
     
    cout<<obj<<"\n";
    cout<<sizeof(obj)<<"\n";
    enum gender{female=1,male=2};
   
    cout<<"enter your gender\n";
    cout<<"1:female\n";
    cout<<"2:male\n";

    cin>>input;

    switch (input)
    {
       case female:
       cout<<"tax free limit is3000\n";
        break;

       case male:
       cout<<"tax free limit is2000\n";
        break;

    }
    return 0;
}