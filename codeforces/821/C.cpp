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
int main(){

  ll n;
  cin>>n;
  stack<ll> s;
  string q;
  string add="add";
  string rem="remove";
  ll rc=1;
  ll flag=0;
  ll count1=0;
  ll thikase=0;
  ll addc=0;
  ll flag2=0;
 map<ll,ll> m;
  for(int i=0;i<2*n;i++){
    cin>>q;
    if(q==add){
            ll temp;
            cin>>temp;
            s.push(temp);
           m[temp]=1;
            flag=0;
            flag2=0;
            addc++;
    }
    else{
        if(s.top()==rc){
            s.pop();
            if(addc>1){
            addc--;
            }
            else if(addc==1){
                addc=0;
                flag=1;
            }
        }
        else if(flag==1 && m[rc]==1){

        }
        else{
            count1++;
            flag=1;
            addc=0;
        }
        rc++;
    }

  }
cout<<count1<<endl;
}


// 1 2 3 1 5 3 1 0 1 0 2
// 1 2 3 4 5 6 7 8 9 10 11