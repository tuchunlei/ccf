#include<iostream>
using namespace std;
int main(){
    int temp=1,sum=0,a;
    while((cin>>a)&&a){
        if(a==1)
            temp=1;
        else if(a==2)
            if(temp==1)
               temp=2;
            else
                temp=temp+2;
         sum=sum+temp;}
    cout<<sum;
    return 0;
    }
