#include<iostream>
using namespace std;
const int N=10005;
int a[N];
int main(){
    int x,n,temp=0,k=0;
    cin>>n;
    while(n--){
        cin>>x;
        a[x]++;
        temp=max(temp,x);//巧妙给出比较范围
    }
    for(int i=1;i<=temp;i++){
        if(a[k]<a[i])//从1到最大数进行次数比较，后面即使遇到相同出现次数的数，由于次数相同，k的值仍然为最小值。相同次数最小值这样就出来了。
            k=i;
    }
    cout<<k;
return 0;
}
