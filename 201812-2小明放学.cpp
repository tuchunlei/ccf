#include<iostream>
using namespace std;
typedef long long ll;
    ll r,y,g;
    ll shijian(ll k,ll t,ll time){
    if(k==0)
        return t;
    else if(k==1)
        t=r-t;
    else if(k==2)
        t=r+g+y-t;
    else if(k==3)
        t=r+g-t;
    t=(t+time)%(r+g+y);
    if(0<=t&&t<r)
        return r-t;
    else if(r<=t&&t<r+g)
        return 0;
    else if((r+g)<=t&&t<(r+g+y))
        return r+g+y-t+r;}
int main(){
    ll n,k,t,ans=0;
    cin>>r>>y>>g;
    cin>>n;
    while(n--){
            cin>>k>>t;
            ans=ans+(shijian(k,t,ans));}
    cout<<ans;
return 0;
}
