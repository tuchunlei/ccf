#include<iostream>
using namespace std;
const int N=10;
struct Rec{
	int x1,x2,y1,y2;//窗口位置
	int rank; //窗口优先等级
	int id;//窗口编号
}a[N+1];
int u[100];
int main()
{
	int i,j,k,x,y,n,m;
	//读入数据
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
		int flag=0,pow=n;//pow表示优先级 优先级高的区域先扫描
		for(k=1;k<=n;k++){//遍历n个窗口
			//寻找优先级为pow的元素 a[i]
			for(i=1;i<=n;i++)
			  if(a[i].rank==pow)
			    break;
			if(a[i].x1<=x&&x<=a[i].x2&&a[i].y1<=y&&y<=a[i].y2){
				cout<<a[i].id<<endl;
				flag=1;
				//优先级变动
				int temp=a[i].rank;
				if(temp!=n){
					a[i].rank=n;
					for(j=1;j<=n;j++){
						if(a[j].rank>temp&&j!=i)
						   a[j].rank--;
					}
				}
				break;//如果是在此窗口中，就跳出循环
			}
			pow--;//没找到，就判断这个点是否在下一个优先级的窗口中
		  }
		  if(!flag)//如果没有找到
		    cout<<"IGNORED"<<endl;
	   }
	return 0;
}

