#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,c=0,flag=0,arr[26];
    pair<int,int>st[26];
    string s,t;
    cin>>n>>k>>s;
    t.resize(k);
    for(int i=0;i<s.size();i++){
        st[s[i]-'a'].first=1;
    }
    for(int i=0;i<26;i++){
        if(st[i].first==1){
            st[i].second=c;
            arr[c++]=i;
        }
    }
    for(int i=k-1;i>=0;i--){
            if(k>s.size()){
                if(i>=s.size())
                t[i]='a'+arr[0];
                else t[i]=s[i];

            }
           else {
                if(i==k-1){
                    char x=s[i];
                    t[i]='a'+arr[(st[x-'a'].second+1)%c];
                    if(st[x-'a'].second+1>=c)flag=1;
                }
                else{
                    char x=s[i];
                    t[i]='a'+arr[(st[x-'a'].second+flag)%c];
                    if(st[x-'a'].second+flag>=c)flag=1;
                    else flag=0;
                }
           }
    }
    cout<<t<<endl;

}
