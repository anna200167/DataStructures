#include<iostream>

using namespace std;

int main()
{
    int a=10,b=12,c=18;
    cout<<"Enter 3 numbers"<<endl;
   cin>>a>>b>>c;

    if(a>b)
    {
        if(a>c){
            cout<<"A is grater...";
        }else{
            cout<<"C is grater";
        }
    }
    else if(b>a){
        if(b>c){
            cout<<"B is Grater";
        }else{
            cout<<"C is Grater";
        }
    }
    return 0;
}
