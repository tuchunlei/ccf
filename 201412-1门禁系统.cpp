#include<iostream>

using namespace std;

const int N=1000;
int a[N+1];

int main()
{
	int n,p;
	cin>>n;
	while(n--){
		cin>>p;
		a[p]++;
		cout<<a[p]<<" ";
	}
	return 0;
}
