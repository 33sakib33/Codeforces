#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define flash  ios_base::sync_with_stdio(false); cin.tie(NULL);
int main(){
    flash;
    ll n,I;
    cin>>n>>I;
    vector<ll> a(n+1,0);
    vector<ll> b(n+1,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    ll c1=0;
    sort(a.begin(),a.end());
    for(int i=1;i<n+1;i++){
        if(a[i]!=a[i-1]){
            c1++;
        }
        b[i]=c1;
    }
    ll bit= (8*I)/n;
    ll j=1;
    ll  sum1=0;
    ll ans=0;
    for(ll i=1;i<n+1;i++){
          sum1=b[i]-b[j]+1;
       double d=log2(sum1);
       d=ceil(d);
       ll d1=d;
 
       while(d1>bit){
 
         j++;
         sum1=b[i]-b[j]+1;
         d=log2(sum1);
         d=ceil(d);
         d1=d;
       }
       ans=max(i-j+1,ans);
    }
 
    cout<<n-ans<<endl;
 
 
}
