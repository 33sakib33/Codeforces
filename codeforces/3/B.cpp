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
    else gcd(b,a%b);
}
int main(){

        ll n,v;
        cin>>n>>v;
        vector<pll> d1(100001),d2;
        vector<pair<ll,pair<ll ,ll> > > a(n);
        set<ll> s;
        ll x,y;
        ll count1=0;
        ll s1=0;
        ll sum12=0;
        ll sum11=0;
        rep(i,1,n+1,1){
            cin>>x>>y;
            if(x==1){
            d1[i]=(mp(y,i));
            s1++;
            count1++;
            }
            else{
            d2.pb(mp(y,i));
            }
            sum12=sum12+y;
            sum11=sum11+x;
        }
        if(sum11<=v){
            cout<<sum12<<endl;
            for(int i=1;i<=n;i++){
                cout<<i<<" ";
            }
        }
        else{

            sort(d1.rbegin(),d1.rend());

          ll ca=0;
           ll sum1=0;
           ll flag=0;
        if(v%2==1){
            s.insert(d1[0].ss);
            sum1=sum1+d1[0].ff;
           // cout<<sum1<<endl<<endl;
            //d1.erase(d1.begin(),d1.begin()+1);
            d1[0].ff=0;
            d1[0].ss=-1;
            flag=1;
            v=v-1;
        }

    //cout<<(d1.b egin()+2)->ff<<endl;

           sort(d1.rbegin(),d1.rend());
        for(ll itr2=0;itr2<s1;itr2=itr2+2){
                ll sum;
                pll p;
            if(itr2==s1-1){
                sum=d1[itr2].ff;
                p=mp(d1[itr2].ss,0);

            }
          else{sum=d1[itr2].ff+(d1[itr2+1]).ff;
            p=mp(d1[itr2].ss,d1[itr2+1].ss);
          }
            a[ca].ff=sum;
            a[ca].ss=p;
            ca++;
        }
           for(auto itr=d2.begin();itr!=d2.end();++itr){
             a[ca].ff=itr->ff;
             a[ca].ss=mp(itr->ss,0);
             ca++;
           }

           sort(a.rbegin(),a.rend());
        /*  for(auto itr=a.begin();itr!=a.end();++itr){
            cout<<itr->ff<<" "<<itr->ss.ff<<" "<<itr->ss.ss<<endl;
          }*/
          auto itr=a.begin();
          ll k=v;

          while(k || !s.empty()){
            if(k==1){
                for(auto itr1=d1.begin();itr1!=d1.end();itr1++){
                    if(s.find(itr1->ss)==s.end()){
                        sum1=sum1+itr1->ff;
                        s.insert(itr1->ss);
                        k=k-1;
                        break;
                    }
                }
                k=0;
                break;
            }
            if(k==0) break;
            sum1=sum1+itr->ff;
            k=k-2;
            if(itr->ss.ff==-1)k++;
            else if(itr->ss.ss==-1)k++;
            s.insert(itr->ss.ff);
            s.insert(itr->ss.ss);
            itr++;
          }
          cout<<sum1<<endl;
          auto itr1=s.begin();
          for(;itr1!=s.end();++itr1){
            if(*itr1!=0)
            cout<<*itr1<<" ";
          }
        }


}





