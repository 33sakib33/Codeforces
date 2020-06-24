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
void printStack(stack<string> s){
    if(s.empty())return;

    string x=s.top();
    s.pop();
    printStack(s);
    cout<<x;
    s.push(x);

}
void deletes(stack<string> &s){

}
void add(string s, stack<string> &x){
    ll st=0;
    if(s[0]=='/'){
        while(x.empty()==false){
            x.pop();
        }
    }
    //x.push("/");

    while(st<s.size()){
             string d;
        for(int i=st;i<s.size();i++){
            if(s[i]=='/'){
                st=i+1;
                break;
            }
            if(i==s.size()-1)st=s.size();
            d.push_back(s[i]);
        }

        if(d==".."){
        if(x.size()>=2){
         x.pop();
         x.pop();
        }
        }
        else {

            x.push(d);
            if(x.top()!="/")x.push("/");
        }
    }
}


int main(){

    ll n;
    cin>>n;
    stack<string> s;
    s.push("/");
    while(n!=0){
        string d;
        cin>>d;
        if(d=="pwd"){
            printStack(s);
            cout<<endl;
        }
        if(d=="cd"){
            string a;
            cin>>a;
            add(a,s);
        }
        n--;
    }


}


// 1 2 3 1 5 3 1 0 1 0 2
// 1 2 3 4 5 6 7 8 9 10 11