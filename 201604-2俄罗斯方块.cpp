#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int i,j,start;
    int box[19][11]={0},zh[5][5]={0};
    for(i=16;i<=18;i++)
    for(j=1;j<=10;j++)
       box[i][j]=1;
        for(i=1;i<=15;i++)
        for(j=1;j<=10;j++)
            cin>>box[i][j];

        for(i=1;i<=4;i++)
        for(j=1;j<=4;j++)
            cin>>zh[i][j];
        cin>>start;
        int flag1=0,flag2=0,t;  //1则表示当前方块停止往下

        for(t=0;t<=15 && flag1==0;t++) //每次往下掉t行相当于与a[]第t行为标准进行四行一起对比
        {
            for(i=1;i<=4 && flag2==0;i++)//对形状每一行轮循 
            {
                for(j=1;j<=4;j++)//对形状每一列轮循  
                {
                    if( zh[i][j]==1 && box[t+i][start+j-1]==1 ) //判断是否停止
                    {
                        for(i=1;i<=4;i++)
                        for(j=1;j<=4;j++)
                           box[t+i-1][start+j-1]=box[t+i-1][start+j-1] | zh[i][j];//基准行往回倒一行
                        flag1=1;
                        flag2=1;
                        break;
                    }
                }
            }
        }

        for(i=1;i<=15;i++)
        {
            for(j=1;j<10;j++)
            {
                cout<<box[i][j]<<" ";
            }
            cout<<box[i][10]<<endl;
        }
    return 0;
}
