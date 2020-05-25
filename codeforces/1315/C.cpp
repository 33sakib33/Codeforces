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
        int n;
        cin>>n;
        int a[10000]={};
        int b[n];
        int d[10000]={};
        memset(a,0,2*n+1);
        int flag=0;
        //cout<<flag<<endl;
        int h=2*n;

        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            b[i]=temp;

              a[temp]++;
              d[temp]++;

        }
        int count1=0;
        for(int i=0;i<n;i++){
            if(b[i]>=h){
                flag=1;
                break;
            }
            for(int j=b[i];j<=2*n;j++){
                if(d[j]==0){
                    count1++;
                    d[j]=1;
                    break;
                }
            }

        }
        if(count1<n){
            flag=1;
        }

        if(flag==1){
            cout<<"-1\n";
        }
        else{
            rep(i,0,n,1){
                cout<<b[i]<<" ";
                rep(j,b[i],2*n+1,1){
                    if(a[j]==0){
                        cout<<j<<" ";
                        a[j]=1;
                        break;
                    }
                }
            }
            cout<<endl;
        }
     }
    }

