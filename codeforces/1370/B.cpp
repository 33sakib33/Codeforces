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

        vector<ll>a(2*n);
        ll parity[2*n]={};

       for(int i=0;i<2*n;i++){
            cin>>a[i];
            if(a[i]%2==0)parity[i]=0;
            else parity[i]=1;
        }
        ll count1=0;
        for(int i=0;i<2*n;i++){
            for(int j=0;j<2*n;j++){
                if(parity[i]==parity[j] && parity[j]!=-1 && i!=j){
                    cout<<i+1<<" "<<j+1<<endl;
                    parity[i]=-1;
                    parity[j]=-1;
                    count1++;
                    break;
                }
            }
            if(count1==n-1) break;
        }
     }

}
