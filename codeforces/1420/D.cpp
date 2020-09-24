#include<bits/stdc++.h>
using namespace std;
#define mod 998244353
#define cin1(x) cin>>x
#define cin2(x,y) cin>>x>>y
#define cin3(x,y,z) cin>>x>>y>>z
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
#define vupll vector< pair < unsigned long long,int >>
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
ll fac[400006 + 7];
ll power(ll x,
                          ll y,  ll p)
{
    ll res = 1;

    x = x % p;


    while (y > 0) {

        if (y & 1)
            res = (res * x) % p;


        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}


ll modInverse(ll n,ll p)
{
    return power(n, p - 2, p);
}


ll nCrModPFermat(ll n,ll r,  ll p)
{
    //
    if(r>n){
        return 0;
    }
    if (r == 0)
        return 1;


    return (fac[n] * modInverse(fac[r], p) % p * modInverse(fac[n - r], p) % p) % p;
}

int main(){

     ll n,k;
    cin>>n>>k;
      fac[0] = 1;
    for ( ll i = 1; i <= n; i++)
        fac[i] = (fac[i - 1] * i) % mod;
    vupll a;
    for(int i=0;i<n;i++){
        ll x,y;
        cin>>x>>y;
        a.pb({x,0});
        a.pb({y,1});
    }
    ll sum1=0;
    ll ans=0;
    ll mx=0;
    sort(a.begin(),a.end());
    for(auto x:a){
        if(x.ss==0){
            sum1+=1;

                if(sum1>=k)
                 ans=(ans+nCrModPFermat(sum1,k,mod))%mod;
                if(sum1>k){
                    ans=((ans-nCrModPFermat(sum1-1,k,mod))%mod+mod)%mod;
                }

        }
        else {

            sum1-=1;



        }


    }
    cout<<ans<<endl;
}

