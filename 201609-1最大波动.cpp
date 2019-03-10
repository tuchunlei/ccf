#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    int temp=-1;
    int a[1005]={0};
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<n;i++)
        temp=max(temp,abs(a[i+1]-a[i]));
    cout<<temp;
    return 0;
}
