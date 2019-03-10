#include<iostream>
#include<algorithm>
using namespace std;
const int maxn=1000;
int main()
{
    int i,a,n,arr[maxn],temp,numl=0,numr=0;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>arr[i];

    sort(arr,arr+n);
    temp=arr[n/2];
    for(i=0;i<n;i++)
    {
        if(arr[i]<temp)
            numl++;
        if(arr[i]>temp)
            numr++;

    }
    if(numl==numr)
    {
        cout<<temp;
    }else{
        cout<<"-1";
    }
    return 0;
}
