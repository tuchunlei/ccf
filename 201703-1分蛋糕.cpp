#include<iostream>
using namespace std;
int main(){
    int n,k,sum=0,count=0,a[1002]={0};
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        sum=sum+a[i];
        if(sum>=k){
            count++;
            sum=0;}
    }
    if(sum>0)
        count++;
    cout<<count;
return 0;
}
