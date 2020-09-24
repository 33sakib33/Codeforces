#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<long long>
vll gr[200007];
bool vis[200007];
vll arr(200007,0);
int itr=1;
int st[200007];
int ed[200007];
int time1=1;
dfs(ll s){
    st[s]=time1;
    time1+=1;
    for(auto x: gr[s]){
        if(vis[x]==false){
            vis[x]=true;
            arr[itr++]=x;
            dfs(x);
        }
    }
    ed[s]=time1;
    time1+=1;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,q;
    cin>>n>>q;
    ll root=1;
    for(int i=2;i<=n;i++){
        ll temp;
        cin>>temp;
        gr[temp].push_back(i);

    }

    memset(vis,false,sizeof(bool));
     vis[root]=true;
    arr[itr++]=root;
    dfs(root);
    vll a(n+1,0);
    for(int i=1;i<=n;i++){
        a[arr[i]]=i;
    }
  /*  for(int i=1;i<=n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
     for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=1;i<=n;i++){
        cout<<st[i]<<" ";
    }
    cout<<endl;
    for(int i=1;i<=n;i++){
        cout<<ed[i]<<" ";
    }
    cout<<endl;*/
    for(int i=0;i<q;i++){
        ll u,b;
        cin>>u>>b;
        if( st[u]+2*b-1>ed[u] ){
            cout<<"-1\n";
        }
        else{
            cout<<arr[a[u]+b-1]<<endl;
        }
    }

}
