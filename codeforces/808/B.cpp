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

       ll n,k;
       cin>>n>>k;
       ll a[n];
       ll sum=0;

       rep(i,0,n,1)cin>>a[i];
       ll count1=1;
       if(n==k || k==1){
        rep(i,0,n,1){sum=sum+a[i];}
       }
       else{
       rep(i,0,n,1){
           if(i+1<min(k,n-k+1)){

            sum=sum+count1*a[i];
            count1++;

           }
           else if(i+1>=min(k,n-k+1)&& i+1<=max(k,n-k+1))
            sum=sum+count1*a[i];
            else if(i+1>max(k,n-k+1)){
                count1--;
                sum=sum+count1*a[i];


            }


       }
       }

       ll weeks=n-k+1;
       double answer=0;
       answer=(double)sum/(double)weeks;
       cout<<fixed<<setprecision(9)<<answer<<endl;

}
