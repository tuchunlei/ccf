#include<iostream>
using namespace std;
const int N=105;
int a[N];
int main(){
    int n,k;
    cin>>n;
    while(n--){
        cin>>k;
        bool flag=false;
        //相邻
        for(int i=1;i<=20&&flag==false;i++){
            int cnt=0;
            for(int j=1 ;j<=5;j++){//一排排进行判断
            int pos=(i-1)*5+j;
            if(!a[pos])
                cnt++;
            else
                cnt=0;
            if(cnt==k){
            for(int m=1;m<=k;m++){
                a[pos-k+m]=1;
                cout<<pos-k+m<<" ";
                }
                flag=true;
                break;}
        }
    }

    //不相邻
    if(flag==false){
        int cnt=0;
        for(int i=1;i<=100;i++){
            if(!a[i]){
                cout<<i<<" ";
                a[i]=1;
                cnt++;}
                if(cnt==k){
                    break;
                }
                }
    }

cout<<endl;
    }


return 0;}
