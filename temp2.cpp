#include<iostream>
using namespace std;

int main(){
            int a;
            int b;
            int c;
            int temp;


            
            cout<<"enter first no:";
            cin>>a;
             cout<<"enter second no:";
            cin>>b;
            cout<<"enter third no:";
            cin>>c;

    
            temp=a;
            a=b;
            b=c;
            c=temp;
    
            
            cout<< "a="<<a<<endl ;
            cout<< "b="<<b<<endl ;
            cout<< "c="<<c<<endl ;
            
            
            return 0;
}            
    