#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    string V;
    ifstream filestream("file1.txt");
    
    if(filestream.is_open())
    {
        while(getline(filestream,V))
        {
            cout<< V << endl;
        }
        filestream.close();
    }
    else
    {
        cout<<"File opening is Fail..";
    }
    
    return 0;
}
