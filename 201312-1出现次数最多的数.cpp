#include<iostream>
using namespace std;
const int N=10005;
int a[N];
int main(){
    int x,n,temp=0,k=0;
    cin>>n;
    while(n--){
        cin>>x;
        a[x]++;
        temp=max(temp,x);//��������ȽϷ�Χ
    }
    for(int i=1;i<=temp;i++){
        if(a[k]<a[i])//��1����������д����Ƚϣ����漴ʹ������ͬ���ִ������������ڴ�����ͬ��k��ֵ��ȻΪ��Сֵ����ͬ������Сֵ�����ͳ����ˡ�
            k=i;
    }
    cout<<k;
return 0;
}
