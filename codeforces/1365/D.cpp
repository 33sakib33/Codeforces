#include<bits/stdc++.h>
using namespace std;
#define mod 1000000009
#define ll long long
#define mp make_pair
#define pb push_back
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
char g[50][50];
void init(int n,int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(g[i][j]=='B'){
            if(i+1<n){
                if(g[i+1][j]!='G' && g[i+1][j]!='B'){
                    g[i+1][j]='#';
                }
            }
            if(i-1>=0){
                   if(g[i-1][j]!='G' && g[i-1][j]!='B'){
                    g[i-1][j]='#';
                }
            }
                if(j+1<m){
                   if(g[i][j+1]!='G' && g[i][j+1]!='B'){
                    g[i][j+1]='#';
                }
            }
                if(j-1>=0){
                   if(g[i][j-1]!='G' && g[i][j-1]!='B'){
                    g[i][j-1]='#';
                }
            }
            }
        }
    }
}
void solve(int i,int j,int n,int m){
    if(i>=n)return;
    if(j>=m)return;
    if(i<0 || j<0)return;
    if(g[i][j]=='#')return;
    if(g[i][j]=='y')return;
        g[i][j]='y';
        solve(i-1,j,n,m);
        solve(i,j-1,n,m);
        solve(i+1,j,n,m);
        solve(i,j+1,n,m);
        return ;

}

int main(){
    int T;
    cin>>T;
    tc(t,T){
    for(int i=0;i<50;i++){
        for(int j=0;j<50;j++){
            g[i][j]='0';
        }

    }
    int n,m;
    cin>>n>>m;
    getchar();
    ll bcount=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            char s;
            cin>>s;

            g[i][j]=s;
            if(s=='B')bcount++;

        }
    }

    init(n,m);
    solve(n-1,m-1,n,m);
    ll bc=0;
    ll flag=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(g[i][j]=='G'){
                flag=1;
                break;
            }
            if(g[i][j]=='B')bc++;
        }
    }
    if(bc<bcount)flag=1;
    if(flag)cout<<"No\n";
    else cout<<"Yes\n";


    }
}
