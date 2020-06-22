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
       ll n;
       cin>>n;
       vector<ll> a(n);
       vector<ll> b(n);
       rep(i,0,n,1)cin>>a[i];
       rep(i,0,n,1)cin>>b[i];
       vector<pll>c(n);
       rep(i,0,n,1){
           c[i].ff=a[i]-b[i];
           c[i].ss=i;
       }

       sort(c.begin(),c.end());
       vector<ll>e(n),f(n);
       rep(i,0,n,1){
        e[i]=c[i].ff;
        f[i]=c[i].ss;
       }
       //for(auto it=d.begin();it!=d.end();++it)cout<<*it<<" ";
       ll count1=0;
       for(ll i=0;i<n-1;i++){
                ll index=0;
                if(e[i]>0){
                index=e.end()-lower_bound(e.begin()+i,e.end(),abs(e[i]))-1;

                }
                else{
                    index=e.end()-upper_bound(e.begin(),e.end(),abs(e[i]));
                }

                count1+=index;

           //count1+=count2;
       }
        cout<<count1<<endl;

}