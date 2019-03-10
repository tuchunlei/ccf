#include<iostream>
#include<string.h>
using namespace std;
int main(){
    int temp=0;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
        temp=temp+(s[i]-'0');
    cout<<temp;
return 0;
}
