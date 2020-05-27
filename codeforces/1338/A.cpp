#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
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

void func(void)
{
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
}
ll gcd(ll a,ll b){
    if(b==0)return a;
    else gcd(b,a%b);
}
int main(){
    ll T;
    cin>>T;
    tc(t,T){
        ll n;
        cin>>n;
        ll s[n];
        rep(i,0,n,1)cin>>s[i];
        ll d=0;
        ll p=0;
        ll x=0;
        ll prevx=0;
        ll todd=0;
         ll count2=0;
         ll min3=LONG_MAX;
             for(ll i=n-1;i>0;i--){
                    min3=min(min3,s[i]);
            if(min3<s[i-1]){
                d=s[i-1]-min3;
                if(pow(2,x)<d+1){
                    p=log2(d+1);
                    if(pow(2,p)<d+1){
                        p++;
                    }
                    x=p;
                    count2=max(count2,x);
                }
            }
         }
         cout<<count2<<endl;
    }
}
