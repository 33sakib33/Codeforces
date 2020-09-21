#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n,I;
    cin>>n>>I;
    vector<ll> a(n,0);
    set<ll> s;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
 
 
    ll bit= (8*I)/n;
    ll j=0;
    ll  sum1=0;
    ll ans=0;
 
    for(ll i=0;i<n;i++){
       s.insert(a[i]);
       double d=log2(s.size());
       d=ceil(d);
       ll d1=d;
 
       while(d>bit){
          if(a[j]!=a[j+1]){
            s.erase(a[j]);
            j++;
          }
          else j++;
         d=log2(s.size());
         d=ceil(d);
        d1=d;
 
       }
       ans=max(i-j+1,ans);
    }
 
    cout<<n-ans<<endl;
 
 
}