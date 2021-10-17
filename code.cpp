#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    string str;
    cin>>str;
    string smin=str;
    string smax=str;
    string temp="";
    for(int i=0;i<str.length();i++)
    {
        string st="";
        for(int j=i;j<str.length();j++)
        {
            st+=str[j];
        }
        st+=temp;
        temp+=str[i];
        smin=min(smin,st);
        smax=max(smax,st);
    }
    temp="";
    for(int i=str.length()-1;i>=0;i--)
    {
        string st="";
        for(int j=i;j>=0;j--)
        {
            st=str[j]+st;
        }
        st=temp+st;
        temp=str[i]+temp;
        smin=min(smin,st);
        smax=max(smax,st);
    }
    cout<<smin<<endl;
    cout<<smax;
    return 0;
}