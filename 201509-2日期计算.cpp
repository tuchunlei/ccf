#include<iostream>
using namespace std;
const int N=13;
int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int b[12]={31,29,31,30,31,30,31,31,30,31,30,31};
int main(){
    int n,m,sum=0;
    cin>>n>>m;
    if((n%400==0)||(n%4==0&&n%100!=0)){
        for(int i=0;i<12;i++){
            sum=sum+b[i];
            if(m>sum)
                continue;
            else
                cout<<i+1<<endl<<(m-(sum-b[i]));
                break;
        }
    }
    else
        for(int i=0;i<12;i++){
            sum=sum+a[i];
            if(m>sum)
                continue;
            else
                cout<<i+1<<endl<<(m-(sum-b[i]));
                break;
        }
    return 0;}
