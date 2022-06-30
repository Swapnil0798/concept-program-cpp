#include<iostream>
using namespace std;
int main()
{
 enum marvellous_bactches{ppa=0,lb=1,lsp=2,python=3};
 int fees[]={15000,16000,17000,18000};
 float duration[]={3.5,4.0,3.5,4.5};
 int choice=0;

 cout<<"select the bactches want to join\n";
 cin>>choice;

 switch(choice)
 {
     case ppa:
     cout<<"thank you slecting for ppa\n";
     cout<<"duration is:\n"<<duration[ppa];
    cout<<"duration is:\n"<<fees[ppa];
    break;
   
     case lb:
     cout<<"thank you slecting for lb\n";
     cout<<"duration is:\n"<<duration[lb];
    cout<<"duration is:\n"<<fees[lb];
    break;
     
      case python:
     cout<<"thank you slecting for python\n";
     cout<<"duration is:\n"<<duration[python];
    cout<<"duration is:\n"<<fees[python];
    break;
     
     default:
     cout<<"sorry such a no batches\n";
     cout<<"contact admin\n";

    break;




 }
cout<<"thank you contacting admin\n";
return 0;

}