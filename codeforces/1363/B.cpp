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
    //flash;
        ll T;
        cin>>T;
        tc(t,T){
        string s;
        cin>>s;
        char zero='0';
        char one ='1';
        int n=s.size();
        int a[n]={};
        int count1=0;
        for(int i=0;i<n-1;i++){
            if(s[i]!=s[i+1]){
                a[i+1]=1;
                count1++;
            }
        }
       // cout<<"sd";
        string d[1001]={};
       string d2[1001]={};
       for(int i=0;i<=1000;i++){
        d[i]=s;
        d2[i]=s;
       }
       /*for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
       }
     //  cout<<endl;*/
       string x=s;
        for(int i=0;i<n;i++){
                if(a[i]==1){
            for(int j=0;j<n;j++){
                if(j<i){
                d[i][j]=zero;

                }
                else{
                     d[i][j]=one;
                }
            }

            }
        }

        for(int i=0;i<n;i++){
                if(a[i]==1){
            for(int j=0;j<n;j++){
                if(j<i){
                 d2[i][j]=one;
                }
                else{

                  d2[i][j]=zero;
                }
            }

            }
        }
        int count3=0,count2=0;
        int answer=INT_MAX;
        for(int i=0;i<n;i++){
                if(a[i]==1){
                        x=d[i];
            for(int j=0;j<n;j++){
                if(x[j]!=s[j]){
                    count3++;
                }

            }
            answer=min(answer,count3);
            count3=0;
            }
        }
          for(int i=0;i<n;i++){
                  if(a[i]==1){
                        x=d2[i];
            for(int j=0;j<n;j++){
                if(x[j]!=s[j]){
                    count2++;
                }

            }

            answer=min(answer,count2);
            string allz=s,allo=s;

            count2=0;
                  }
        }
        int cntz=0;
        int cnto=0;
          for(int i=0;i<n;i++){
            if(s[i]!=zero)cntz++;
            if(s[i]!=one)cnto++;
            }


        answer=min(answer,min(cntz,cnto));
        cout<<answer<<endl;
        }


}

