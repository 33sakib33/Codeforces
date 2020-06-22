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
       // flash;


       ll n,k;
       cin>>n>>k;
       vector<ll> a(n);

       rep(i,0,n,1)cin>>a[i];
       sort(a.begin(),a.end());
       ll mid=(n/2);
       ll sum=0;
       ll c=1;
       ll m=a[mid];
       ll index=0;
       if(a[mid+1]-a[mid]>k){
            cout<<a[mid]+k;
       }
       else{
       for(int i=mid;i<n-1;i++){
            if(k>=c*(a[i+1]-a[i])){
            m=a[i+1];
            k=k-c*(a[i+1]-a[i]);
            index=i+1;
            c++;
            }
            else break;
       }
       /*if(m==a[n-2]){
        if(c*(a[n-1]-a[n-2])<=k){
            m=a[n-1];
            k=k-c*a[n-1]-a[n-2];
        }
       }*/
       if(m!=a[n-1]){
            ll rest=index-mid+1;
            ll toi= k/(rest);
            if(toi<a[index+1]-a[index]){
                m=m+toi;
            }
            cout<<m<<endl;
       }
       else{
            ll answer= m+k/((n+1)/2);
            cout<<answer;
       }
       }



}
