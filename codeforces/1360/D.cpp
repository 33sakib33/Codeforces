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
bool prime[100001];
void SieveOfEratosthenes()
{
    ll n=100001;
    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p greater than or
            // equal to the square of it
            // numbers which are multiple of p and are
            // less than p^2 are already been marked.
            for (ll i=p*p; i<=n; i += p)
                prime[i] = false;
        }
    }

    // Print all prime numbers

}


int main(){
    SieveOfEratosthenes();
    prime[1]=true;
    ll p=100000;
  ll  T;
   cin>>T;
   tc(t,T){
    ll n,k;
    cin>>n>>k;
    int flag=0;
    ll answer=n;

    if(k>=n){
        answer=1;
    }
    else {
    for(ll i=2;i<=min(p,k);i++){
        //if(prime[i]==true){ //eta comment korsi
            if(n%i==0){
                if(n/i<=k){
                    answer=min(i,answer);
                    flag=1;
                }
                else{
                    answer=n/i;
                    flag=1;
                }
            }
        //}
    }
    if(flag==0){
        answer=n;
    }
   }
    /*  else if(2*k<n){
    for(ll i=2;i<=min(p,k);i++){
        if(prime[i]==true){
            if(n%i==0){
                   answer=min(i,n/i);
                   flag=1;
                }
            }
        }

      if(flag==0){
        answer=n;
      }

}*/



  cout<<answer<<endl;
}
   }
