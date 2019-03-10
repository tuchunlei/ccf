#include<iostream>

using namespace std;

int main()
{
    int a[1005]={0};
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	  cin>>a[i];
	for(int i=1;i<=n;i++){
		if(i==1||i==n)
            cout<<(a[i-1]+a[i]+a[i+1])/2<<" ";
        else
            cout<<(a[i-1]+a[i]+a[i+1])/3<<" ";
	}
	return 0;
}
