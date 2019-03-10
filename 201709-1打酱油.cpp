#include<iostream>
using namespace std;
int main(){
    int N,max;
    cin>>N;
    int a=N/50;
    int b=N%50;
    int c=b/30;
    int d=b%30;
    max=a*7+c*4+d/10;
    cout<<max;
return 0;
}
