#include<iostream>

using namespace std;

const int N=500;

int main()
{
	int n,a[N][N];
	//��������
	cin>>n;
	for(int i=0;i<n;i++)
	  for(int j=0;j<n;j++)
	    cin>>a[i][j];
	//��ӡ���
	for(int i=0;i<2*n-1;i++){ //��2*n-1��б��
		int s=i<n?0:(i-n+1);
		int e=i<n?i:(n-1);
		if(i%2==0){//��i��б�߱����ż��  �����´�ӡ������
 		  for(int j=s;j<=e;j++)
	  	    cout<<a[i-j][j]<<" ";
		}
	    else{//��i��б�߱��������  �����ϴ�ӡ������
	      for(int j=s;j<=e;j++)
	  		cout<<a[j][i-j]<<" ";
		}
	}
	cout<<endl;
	return 0;
}
