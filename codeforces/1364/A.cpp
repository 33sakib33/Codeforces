#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long
#define ull unsigned long long
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
#define pllu pair<ull, ull>
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
bool sortbysec2(const pllu &a,
              const pllu &b)
{
    if(a.ff!=b.ff)
    return (a.ff < b.ff);
    else return(a.ss<b.ss);
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
         ll n,x;
         cin>>n>>x;

        vector<ll> a(n);
        rep(i,0,n,1)cin>>a[i];
        ll sum=0;
        ll sum1[n]={};
        ll sum2[n]={};
        vector<ll> mods(n),mods2(n);
        rep(i,0,n,1){
            sum=sum+a[i];
            sum1[i]=sum;
            mods[i]=(sum%x+x)%x;
        }
        sum=0;
         for(ll i=n-1;i>=0;i--){
            sum=sum+a[i];
            sum2[i]=sum;
            mods2[i]=(sum%x+x)%x;
        }
        ll m1=0;
        ll m2=0;
        for(ll i=0;i<n;i++){
            if(sum1[i]%x!=0){
                m1=max(m1,abs(i+1));
            }
        }
        for(ll i=0;i<n;i++){
            if((sum1[n-1]-sum1[i])%x!=0){
                m2=max(m2,n-1-i);
            }
        }

        if (m1==0 && m2==0){
            cout<<-1<<endl;
        }
        else{
        cout<<max(m1,m2)<<endl;
        }
        }


}

