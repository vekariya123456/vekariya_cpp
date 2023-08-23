#include<iostream>
using namespace std;
int main()
{
    int math[5],sci[5],guj[5],total[5],per[5];
    int i;
    char grade[5];

    for(i=0;i<5;i++)
      {
         cout<<"\n\n"<<"Enter Student Marks-->"<<(i+1);

         cout<<"Enter Maths Marks=";
         cin>>math[i];
         cout<<"Enter Science Marks=";
         cin>>sci[i];
         cout<<"Enter Gujarati Marks=";
         cin>>guj[i];

         total[i]=math[i]+sci[i]+guj[i];
         per[i]=total[i]/3;

      }   
       
         -


      


}