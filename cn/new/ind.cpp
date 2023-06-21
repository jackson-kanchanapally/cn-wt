#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int b=0;
    try{
        if(b==0)
        {
            throw 1;
        }
        else{
           
        }
    }
    catch(int x)
    {
        cout<<"exas";
    }
    return 0;
}