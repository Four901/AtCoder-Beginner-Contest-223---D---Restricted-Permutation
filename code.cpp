#include<bits/stdc++.h>
#define ll long long 
#define db double
using namespace std;
int main()
{
    ll N,M;
    cin>>N>>M;
    vector<vector<ll> >graph(N);
    ll l,r;
    vector<ll>indeg(N,0);
    while(M--)
    {
        cin>>l>>r;
        l--;
        r--;
        graph[l].push_back(r);
        indeg[r]++;
    }
    priority_queue<ll,vector<ll>,greater<ll> >q;
    
    for(ll i=0;i<N;i++)
    {
        if(indeg[i]==0)
        {
            q.push(i);
        }
    }
    
    
    
    ll cnt = 0;
    vector<ll> order;

    
    while (!q.empty()) {
        
        ll u = q.top();
        q.pop();
        order.push_back(u);
 
        for(ll i=0;i<graph[u].size();i++)
        {
            
            if(--indeg[graph[u][i]]==0)
            {
                
                q.push(graph[u][i]);
            }
        }
        
        
 
        cnt++;
    }
 
    
    if (cnt != N) {
        cout<<-1;
        return 0;
    }
 
  
    for (int i = 0; i < order.size(); i++)
        cout << order[i]+1 << " ";
    
    
    return 0;
}