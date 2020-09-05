#include<bits/stdc++.h>
using namespace std;
#define mod 1000000009
#define ll long long
#define ull unsigned ll
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
ull fact(ull x){
    ull d=1;
    for(ull i=1;i<=x;i++){
        d=d*i;
    }
    return d;
}
ull comb(ull n,ull r){
    ull s=1;
    if(r<s/2){
    for(ull i=n;i>=n-r+1;i--){
        s=s*i;
    }
    }
    else{

    }
    for(ull i=1;i<=r;i++){
        s/=i;
    }
    return s;
}
ull binomialCoeff(ull n, ull k)
{
    ull C[k+1];
    memset(C, 0, sizeof(C));

    C[0] = 1;

    for (ull i = 1; i <= n; i++)
    {
        // Compute next row of pascal triangle using
        // the previous row
        for (ull j = min(i, k); j > 0; j--)
            C[j] = C[j] + C[j-1];
    }
    return C[k];
}

int main(){
    ull n,m,t;
    cin>>n>>m>>t;
    ull ans=0;
    for(ull i=4;t-i>=1;i++){
        ans=ans+(binomialCoeff(n,i)*binomialCoeff(m,t-i));
    }
    cout<<ans<<endl;

}
