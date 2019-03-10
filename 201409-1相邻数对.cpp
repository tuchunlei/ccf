#include<iostream>
#include<algorithm>

using namespace std;

const int N = 1000;
int a[N];

int main() {
	int n,count=0;
	cin>>n;
	for(int i=0;i<n;i++)
	  cin>>a[i];
	sort(a,a+n);//≈≈–Ú ∑«Ωµ–Ú≈≈¡–
	for(int i=0;i<n-1;i++)
	  if(a[i]==a[i+1]-1)
	    count++;
	cout<<count<<endl;
	return 0;
}
