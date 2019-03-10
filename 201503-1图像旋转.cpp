#include<iostream>
using namespace std;
const int N=1000;
int a[N][N];
int main(){
    int n,m;
    cin>>n>>m;
    for(int i =0;i<n;i++){
        for(int j=0;j<m;j++)
            cin>>a[i][j];
    }
    for(int j=m-1;j>-1;j--){
        for(int i=0;i<n;i++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}
