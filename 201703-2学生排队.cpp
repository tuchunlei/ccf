#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<int>s;
int main(){
int n,k,p,q;
cin>>n>>k;
for(int i=1;i<=n;i++)
    s.push_back(i);
while(k--){
    int temp=0;
    cin>>p>>q;
    for(int i=0;i<s.size();i++){
        if(s[i]==p){
            temp=i;
            break;}//һ���ҵ��ͽ���ѭ������ɾ���Ͳ������
    }
    s.erase(s.begin()+temp);
    s.insert(s.begin()+temp+q,p);
}
for(int i=0;i<s.size();i++)
    cout<<s[i]<<" ";
return 0;
}
