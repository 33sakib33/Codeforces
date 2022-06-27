#include<bits/stdc++.h>
using namespace std;

#define ll long long 
ll n;
vector<ll> ans(200007,0);
vector<ll> ordering;
vector<ll> adj[200007];
vector<ll> childSum(200007,0);
vector<ll> subTree(200007,0);
void dfs(ll s, ll p){
    ordering.push_back(s);
    subTree[s]=1;
    for(auto &x:adj[s]){
        if(x!=p){
            dfs(x,s);
            subTree[s]+=subTree[x];
            childSum[s]+=childSum[x];
        }
    }
    childSum[s]+=subTree[s];
}
ll max1=ans[0];
void solve(ll cur1,ll prev1){
        for(auto &x:adj[cur1]){
            if(x!=prev1){
                ll sum2=ans[cur1]-subTree[x];
                ll sum1=sum2-subTree[x]+n;
                ans[x]=sum1;
                max1=max(max1,ans[x]);
                solve(x,cur1);
            }
        }
}
int main(){
    cin>>n;
    for(int i=0;i<n-1;i++){
        ll a,b;
        cin>>a>>b;
        adj[a-1].push_back(b-1);
        adj[b-1].push_back(a-1);
    }
    dfs(0,-1);
    ans[0]=childSum[0];
    solve(0,-1);
    cout<<max1<<endl;
}