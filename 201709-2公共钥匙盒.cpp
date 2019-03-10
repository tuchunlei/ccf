#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n,k;
struct time//时间数组
{
    bool huankey;
    vector<int> huan;
    bool jiekey;
    vector<int> jie;
}a[10200];
bool cmp(int x, int y) {
    return x < y;
}
void fang(int a[], vector<int> b){
    int len = b.size();
    int j = 1;
    sort(b.begin(), b.end(), cmp);
    for (int i = 0; i < len; i++) {
        while(a[j] != 0) j++;
        a[j] = b[i];
    }
}
void na(int a[],vector<int> b){
int len = b.size();
for(int i=0;i<len;i++){
    for(int j=1;j<=n;j++){
        if(a[j]==b[i]){
            a[j]=0;
            break;}
}
}
}
int main(){
int w,s,c;
cin>>n>>k;
int key[n+1];
for (int i = 0; i < n+1; i++) key[i] = i;
for (int i = 0; i < 10200; i++) {//从0开始，vector数组默认从0开始存储
    a[i].jiekey = a[i].huankey = false;
    }
while(k--){
    cin>>w>>s>>c;
    a[s].jiekey=true;
    a[s].jie.push_back(w);
    a[s+c].huankey=true;
    a[s+c].huan.push_back(w);
}
for(int i=0;i<10200;i++){
    if(a[i].jiekey==true || a[i].huankey==true){
        if(a[i].huankey==true)
            fang(key,a[i].huan);
        if(a[i].jiekey==true)
            na(key,a[i].jie);
}
}
for(int i=1;i<n;i++)
    cout<<key[i]<<" ";
cout<<key[n];
return 0;
}
