#include<iostream>
#include<cmath>
using namespace std;
int main(){
int n,temp=0;
int a[505]={0};
cin>>n;
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
     if((a[i]+a[j])==0)
        temp++;
}
}
cout<<temp/2;
return 0;
}
