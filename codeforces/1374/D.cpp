#include<bits/stdc++.h>
using namespace std;
#define mod 1000000009
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



int main()
{
    ll T;
    cin>>T;
        tc(t,T){
        ll n,k;
        cin>>n>>k;
        vll a(n,0),b(n,0);
        rep(i,0,n,1)cin>>a[i];
        ll count0=0;
        rep(i,0,n,1){
            b[i]=k-a[i]%k;
            if(a[i]%k==0)count0++;
            if(a[i]%k==0)b[i]=0;
        }
        if(count0==n){
            cout<<0<<endl;
        }
        else{
            sort(b.begin(),b.end());
            map<ll,ll>m;
            rep(i,0,n,1){
                if(b[i]!=0)m[b[i]]++;
            }

            ll x=1;
            ll c=1;
            ll answer=1;
            ll ad=k;



             /*   if(b[i]!=0){
                        ll td=b[i];
                        if(td<x){
                            while(m.find(td)!=m.end()){
                                td=td+k;
                            }
                        }

                        //cout<<td<<endl;


                           if(m.find(td)==m.end() && td<x){
                                        m[td]++;
                            }
                            else{
                                answer=answer+td-x+1;
                                if(td>=x){
                                x=td;
                                x++;
                                }
                                  m[td]++;

                            }
*/



                    ll answer1=0;
                     ll answer2=0;
                    //if(m.find(td)==m.end()){
                    for( auto it : m){
                        answer2=answer2+it.first+((it.second)-1)*(k);
                        answer1=max(answer2,answer1);
                        answer2=0;
                    }
                cout<<answer+answer1<<endl;
            }





        }
        }





// 1 2 3 1 5 3 1 0 1 0 2
// 1 2 3 4 5 6 7 8 9 10 11






