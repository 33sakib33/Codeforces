#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t!=0){
    ll a,b;
    cin>>a>>b;
    if(a==0 && b!=0){
        cout<<"NO\n";
    }
    else if(b==0 && a!=0){
        cout<<"NO\n";
    }
    else if(max(a,b)>2*min(a,b)){
         cout<<"NO\n";
    }
    else if((a+b)%3==0){
        cout<<"YES\n";
    }
    else cout<<"NO\n";
    t--;
    }
}