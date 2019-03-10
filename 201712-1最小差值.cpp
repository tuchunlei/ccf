#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,m=10000;
    int a[1000]={0};
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(int i=1;i<n;i++)
        m=min(m,a[i]-a[i-1]);
cout<<m;
return 0;
}

