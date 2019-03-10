#include<iostream>
using namespace std;
const int N=1000005;
int a[N];
int main(){
    int n,x,y;
    cin>>n;
    for(int i=1;i<=2*n;i++){//�±귨
            cin>>x>>y;
    for(int j=x;j<y;j++){
        a[j]++;
    }
}
    long long temp=0;
    for(int i=1;i<N;i++){
            if(a[i]==2)
            temp++;
    }
cout<<temp;
return 0;}
