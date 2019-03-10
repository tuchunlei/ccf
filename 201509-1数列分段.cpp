#include<iostream>
using namespace std;
int main(){
    int n,temp=1;
    int a[1005]={0};
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=2;i<=n;i++){
        if(a[i]==a[i-1])
            continue;
        else
            temp++;}
    cout<<temp;
    return 0;
}
