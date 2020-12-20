#include<bits/stdc++.h>
using namespace std;
#define mod 1000000009
#define ll long long
#define mp make_pair
#define pb push_back
#define nl printf("\n")
#define ff first
#define ss second
#define set0(a) memset ((a), 0 , sizeof(a))
#define set1(a) memset((a),-1,sizeof (a))
#define pi pair<int, int>
#define ps pair<string, string>
#define pl pair<long, long>
#define pll pair<long long, long long>
#define vll vector<long long>
#define vl vector<long>
#define vi vector<int>
#define vs vector<string>
#define vps vector< ps >
#define vpi vector< pi >
#define vpl vector< pl >
#define vpll vector< pll >
#define flash  ios_base::sync_with_stdio(false); cin.tie(NULL);
#define tc(t,T) for(long long t=0;t<T;t++)
#define rep(i,s,n,d) for(long long i=s;i<n;i=i+d)
const int todx[] = { -2, -2, -1, -1,  1,  1,  2,  2 };
const int tody[] = { -1,  1, -2,  2, -2,  2, -1,  1 };
bool sortbysec(const pll &a,
              const pll &b)
{
    return (a.second < b.second);
}
/*bool cxp pair<ll, pll> &a,
              const pair<ll, pll> &b)
{
    return (a.ff < b.ff);
}*/

void func(void)
{
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
}
ll gcd(ll a,ll b){
    if(b==0)return a;
    else return gcd(b,a%b);
}
void printStack(stack<string> s){
    if(s.empty())return;

    string x=s.top();
    s.pop();
    printStack(s);
    cout<<x;
    s.push(x);

}


ll binaryexp(ll n,ll p){

    if(p==0) return 1;
    if(p%2==0) return binaryexp((n%mod)*(n%mod),p/2);
    else return ((n%mod)*binaryexp(((n%mod)*(n%mod))%mod,(p-1)/2)%mod);

}

#define meax 10000001
vll spf(meax,0);
void siv(){
    spf[1]=1;

   for(ll i=2;i<meax;i++)spf[i]=i;

   for(ll i=4;i<meax;i+=2){
        spf[i]=2;
    }
    for(ll i=3;i*i<meax;i++){
        if(spf[i]==i){
            for(ll j=i*i;j<meax;j+=i){
                if(spf[j]==j){
                    spf[j]=i;
                }
            }
        }
    }
}

int main(){
    ll T ;
    cin>>T;
    tc(t,T){

        ll n,a,b,da,db;
        cin>>n>>a>>b>>da>>db;
        vll gr[n+7];
        ll maxlevel=0;
        vll        level(n+7,0);
        vll         degree(n+7,0);
        vll vis(n+7,0);
        vll dis(n+7,0);
        set <ll>   c;
        queue <ll> q;

        for(int i=0;i<n-1;i++){
                ll x,y;
                cin>>x>>y;
                gr[x].pb(y);
                gr[y].pb(x);
                degree[x]++;
                degree[y]++;
        }
       for(int i=1;i<=n;i++){
        if(degree[i]==1){
            q.push(i);
        }
       }
       ll x1=LONG_MAX;

       while(!q.empty()){
            ll d=q.front();
            q.pop();
            for(auto x:gr[d]){
                degree[x]--;
                if(degree[x]==1){
                q.push(x);
                level[x] = level[d] + 1;
                maxlevel = max(maxlevel, level[x]);

                }
            }
       }
       for(int i=1;i<=n;i++){
            if(maxlevel==level[i]){
                c.insert(i);
            }
       }
       queue<ll>q2;
       q2.push(a);
       dis[a]=0;
       vis[a]=1;
       while(!q2.empty()){
            ll d=q2.front();
            q2.pop();
            for(auto x:gr[d]){
                if(vis[x]==0){
                    q2.push(x);
                    dis[x]=dis[d]+1;
                    vis[x]=1;
                }
            }

        }
       ll dia=2*maxlevel+c.size()-1;
       ll rad=(dia+1)/2;

       if(dis[b]<=da){
        cout<<"Alice";
       }
       else if(da>=rad){
        cout<<"Alice";
       }
       else if(2*da>=db){
         cout<<"Alice";
       }
       else cout<<"Bob";
       nl;
    }
}
