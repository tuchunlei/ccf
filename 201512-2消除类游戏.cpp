//如果一个元素在一行被消除了，它也可能与同列的元素在一起被消除，因此可以用元素的编号的负数值标记它被消除，
//通过对它取绝对值，使得它继续参与其它方向的消除，最后打印答案的时候只需要把值为负的元素打印成0即可。
//数组定义在外边
#include<iostream>
#include<algorithm>
using namespace std;
const int N=30;
int a[N][N];
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }

    //找行
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m-2;j++){
            if(abs(a[i][j])==abs(a[i][j+1])&&abs(a[i][j])==abs(a[i][j+2])){
                if(a[i][j]>0)
                    a[i][j]=a[i][j]*(-1);
                if(a[i][j+1]>0)
                    a[i][j+1]=a[i][j+1]*(-1);
                if(a[i][j+2]>0)
                    a[i][j+2]=a[i][j+2]*(-1);
            }
        }
    }
    //找列
    for(int j=1;j<=n-2;j++){
        for(int i=1;i<=m;i++){
            if(abs(a[j][i])==abs(a[j+1][i])&&abs(a[j][i])==abs(a[j+2][i])){
                if(a[j][i]>0)
                    a[j][i]=a[j][i]*(-1);
                if(a[j+1][i]>0)
                    a[j+1][i]=a[j+1][i]*(-1);
                if(a[j+2][i]>0)
                    a[j+2][i]=a[j+2][i]*(-1);
            }
        }
    }
    //输出
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
                if(a[i][j]<0)
                    cout<<"0";
                else
                    cout<<a[i][j];
                if(j!=m)
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;}
