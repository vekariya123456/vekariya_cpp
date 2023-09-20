#include<iostream>
using namespace std;

class Result
{
    int math,sci,guj,total_marks,per;
    string name;

    public:
    void setdata()
    {
        cout<<"Enter Student Name:";
        cin>>name;

        cout<<"Enter Maths MArks:";
        cin>>math;
        
        cout<<"Enter Science Name:";
        cin>>sci;

        cout<<"Enter Gujarati Name:";
        cin>>guj;

        

    }
}