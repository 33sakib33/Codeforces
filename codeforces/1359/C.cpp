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
  tc(d,T){
    ll h,c,t;
    ll answer=0;
    ll answer2=0;
    cin>>h>>c>>t;
    if(2*t<=h+c){
        answer=2;
    }
    else{
        long double a=(double)(h-t)/(double)(2*t-h-c);
        //cout<<a<<endl;
        //cout<<a<<endl;
        ll b=ceil(a);
        ll e=floor(a);
        answer=b+b+1;
        answer2=e+e+1;
        long double a1=(b+1)*h+b*c;
        long double a2=(e+1)*h+e*c;
        a1=a1/answer;
        a2=a2/answer2;
        double a3;
        if(fabs(a1-t)>=fabs(a2-t)){
            answer=answer2;
            a3=a2;
        }
        else {
                answer=answer;
                a3=a1;
        }


       if(fabs(a3-t)>fabs(t-h)){
                answer=1;
             }

    }
    cout<<answer<<endl;
  }
}
