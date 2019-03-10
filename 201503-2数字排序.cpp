#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
struct number{
       int val;
       int cnt;
       bool operator<(const number &a)const{
return (cnt==a.cnt)?(val<a.val):(cnt>a.cnt);
}
       }a[1000];
int main(){
    int n,x;
    cin>>n;
    map<int,int>d;
    for(int i=0;i<n;i++){
        cin>>x;
        d[x]++;
    }
    int m=0;
    for(map<int,int>::iterator it=d.begin();it!=d.end();it++){
        a[m].val=it->first;
        a[m++].cnt=it->second;
    }
    sort(a,a+m);
	for(int i=0;i<m;i++)
	  cout<<a[i].val<<" "<<a[i].cnt<<endl;
    return 0;}
