#include<iostream>
 using namespace std;
const int N=100;
int a[N+1][N+1];

int main()
{
	int n,i,j,x1,x2,y1,y2;
	cin>>n;
	while(n--){
		cin>>x1>>y1>>x2>>y2;
		for(i=x1+1;i<=x2;i++)
		  for(j=y1+1;j<=y2;j++)
		    a[i][j]=1;
	}
	int aver=0;
	for(i=1;i<=N;i++)
	  for(j=1;j<=N;j++)
	    if(a[i][j])
	      aver++;
	cout<<aver;
	return 0;
}
