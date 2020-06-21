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
    bool sortbysec2(const pll &a,
                  const pll &b)
    {
        if(a.ff!=b.ff)
        return (a.ff < b.ff);
        else return(a.ss<b.ss);
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
     
    int customlog(long double base, long double value){
        return (int)(log(value)/log(base));
    }
    void printNTimes(char c, ll n)
    {
     
        cout << string(n, c);
    }
    int main(){
     
            ll n;
            cin>>n;
            ll answer=7+(n-1)*3;
            cout<<answer<<endl;
            cout<<"0 0\n0 1\n1 0\n1 1\n1 2\n2 1\n2 2\n";
            ll row=2;
            ll count1=0;
            ll col=3;
     
            while(1){
                if(count1==(n-1)*3)break;
                cout<<row<<" "<<col<<endl;
                col--;
                row++;
                cout<<row<<" "<<col<<endl;
                col++;
                cout<<row<<" "<<col<<endl;
                col++;
                count1=count1+3;
            }
    }
     