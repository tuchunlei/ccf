//使用队列，主要是利用队列的先进先出进行轮循
//#include<iostream>
//#include<queue>
//using namespace std;
//int main(){
//    queue<int> q;
//    int n,no=0,head,k;
//    cin>>n>>k;
//    for(int i=1;i<=n;i++){
//        q.push(i);
//    }
//    while(!q.empty()){
//        head=q.front();
//        q.pop();
//        no++;
//        if(no%k==0||no%10==k)
//            ;
//        else
//           q.push(head);
//
//    }
//    cout<<head;
//return 0;
//}
#include<iostream>
using namespace std;
const int N=1005;
int a[N];
int main(){
    int n,k;
    cin>>n>>k;
    int num=n,no=0;
    for(int i=0;;){
        if(num==1)
            break;
        if(!a[i]){
            no++;
        if(no%k==0||no%10==k){
            num--;
            a[i]=1;
            }
        }
        i=(i+1)%n;

    }
    for(int i=0;i<n;i++){
        if(a[i]==0){
            cout<<(i+1);
            break;
    }}
return 0;}
