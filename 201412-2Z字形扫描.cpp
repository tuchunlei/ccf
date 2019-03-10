#include<iostream>

using namespace std;

const int N=500;

int main()
{
	int n,a[N][N];
	//读入数据
	cin>>n;
	for(int i=0;i<n;i++)
	  for(int j=0;j<n;j++)
	    cin>>a[i][j];
	//打印输出
	for(int i=0;i<2*n-1;i++){ //共2*n-1条斜线
		int s=i<n?0:(i-n+1);
		int e=i<n?i:(n-1);
		if(i%2==0){//第i条斜线编号是偶数  从左下打印到右上
 		  for(int j=s;j<=e;j++)
	  	    cout<<a[i-j][j]<<" ";
		}
	    else{//第i条斜线编号是奇数  从右上打印到左下
	      for(int j=s;j<=e;j++)
	  		cout<<a[j][i-j]<<" ";
		}
	}
	cout<<endl;
	return 0;
}
