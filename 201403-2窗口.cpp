#include<iostream>
using namespace std;
const int N=10;
struct Rec{
	int x1,x2,y1,y2;//����λ��
	int rank; //�������ȵȼ�
	int id;//���ڱ��
}a[N+1];
int u[100];
int main()
{
	int i,j,k,x,y,n,m;
	//��������
	cin>>n>>m;
	for(i=1;i<=n;i++){
		cin>>a[i].x1>>a[i].y1>>a[i].x2>>a[i].y2;
	    a[i].id=i;
	    a[i].rank=i;
	}
	for(int c=1;c<=2*m;c++){
        cin>>u[c]>>u[c+1];
        c=c+1;
	}
	int f=1;
	while(m--){
		x=u[f];
		y=u[f+1];
        f=f+2;
		int flag=0,pow=n;//pow��ʾ���ȼ� ���ȼ��ߵ�������ɨ��
		for(k=1;k<=n;k++){//����n������
			//Ѱ�����ȼ�Ϊpow��Ԫ�� a[i]
			for(i=1;i<=n;i++)
			  if(a[i].rank==pow)
			    break;
			if(a[i].x1<=x&&x<=a[i].x2&&a[i].y1<=y&&y<=a[i].y2){
				cout<<a[i].id<<endl;
				flag=1;
				//���ȼ��䶯
				int temp=a[i].rank;
				if(temp!=n){
					a[i].rank=n;
					for(j=1;j<=n;j++){
						if(a[j].rank>temp&&j!=i)
						   a[j].rank--;
					}
				}
				break;//������ڴ˴����У�������ѭ��
			}
			pow--;//û�ҵ������ж�������Ƿ�����һ�����ȼ��Ĵ�����
		  }
		  if(!flag)//���û���ҵ�
		    cout<<"IGNORED"<<endl;
	   }
	return 0;
}

