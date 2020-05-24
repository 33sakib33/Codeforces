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

       ll  T;
       cin>>T;
       tc(t,T){
         int n;
         cin>>n;
         int a[1000];
         int min1=1000;
         int minIndex=-1;
         int flag=0;
         rep(i,0,n,1)cin>>a[i];
         for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(min1>a[j]){
                    min1=a[j];
                    minIndex=j;
                    flag=1;
                }
            }
            if(minIndex!=i){
            for(int k=minIndex;k>=i;k--){

                a[k]=a[k-1];
                if(k==i){
                    a[k]=min1;
                }
            }
            if(flag==1 && minIndex!=n-1)
                i=minIndex-1;
            else i=minIndex;
            }
            min1=1000;


         }
         rep(i,0,n,1)cout<<a[i]<<" ";
         cout<<endl;
       }
    }
