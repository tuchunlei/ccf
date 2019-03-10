#include<iostream>
using namespace std;
const int N=10;
const int MOD=11;
char a[N+1];
char c[N+1];
int main()
{
	int i,j=1,k=1,sum=0;
	char ch;
    cin>>a[1]>>c[j++]>>a[2]>>a[3]>>a[4]>>c[j++]>>a[5]>>a[6]>>a[7]>>a[8]>>a[9]>>c[j++]>>a[10];
	for(i=1;i<N;i++)
		sum+=i*(a[i]-'0');
	sum%=MOD;
	if(sum==10)
	   ch='X';
	else
	   ch=sum+'0';
	if(ch==a[10])
	  cout<<"Right"<<endl;
	else
	  cout<<a[1]<<"-"<<a[2]<<a[3]<<a[4]<<"-"<<a[5]<<a[6]<<a[7]<<a[8]<<a[9]<<"-"<<ch;
	return 0;
}
