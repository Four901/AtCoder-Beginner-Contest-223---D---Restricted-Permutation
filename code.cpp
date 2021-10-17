#include<bits/stdc++.h>
#define ll long long 
#define db double
using namespace std;
int main()
{
    vector<db>a,b;
    ll n;
    cin>>n;
    db l,r;
    db time=0.00;
    for(int i=0;i<n;i++)
    {
     cin>>l>>r;
     time+=db(l/r);
     a.push_back(l);
     b.push_back(r);
    }
    time=db(time/(db)2.0000000000);
    db ans=0;
     
    for(int i=0;i<n;i++)
    {
       
        if(db(a[i]/b[i])<=time)
        {
            ans+=a[i];
            time-=db(a[i]/b[i]);
        }
        else
        {
            ans+=db(time*b[i]);
            break;
        }
    }
    cout<<ans;
    return 0;
}