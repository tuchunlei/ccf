#include<iostream>
using namespace std;
int main(){
    int n,temp=0;
    int a[1005]={0};
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<n-1;i++){
        if(((a[i+1]-a[i])>0&&(a[i+2]-a[i+1])<0)||((a[i+1]-a[i])<0&&(a[i+2]-a[i+1])>0))
           temp++;
    }
    cout<<temp;
return 0;
}
