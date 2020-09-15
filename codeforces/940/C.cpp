#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    int n;
    cin>>n;
    cin>>k;
    string s;
    int st[26];
    pair<char,int> yo[26];
    int arr[26];
    cin>>s;
    for(int i=0;i<s.size();i++){
        st[s[i]-'a']=1;
    }
    int prev=-1;
    for(int i=0;i<26;i++){
        yo[0].first='a'+i;
    }
    int c=0;
    for(int i=0;i<26;i++){
        if(st[i]==1){
            arr[c++]=i;
        }
        /*i=i%26;
        if(st[yo[i].ff]==1){
        yo[i].ss=prev;
        prev=i;
        }*/

    }

    string t(k,'a');
    int flag=0;
    int flag1=0;

    for(int i=k-1;i>=0;i--){
            if(k>s.size()){
                if(i>=s.size())
                t[i]='a'+arr[0];
                else t[i]=s[i];

            }
           else {
            for(int j=0;j<c;j++){
                    int s1=s[i]-'\0';
                    int s2=arr[j]+'a';

                if(s1==s2){
                    if(i==k-1 && flag==0 && flag1==0){
                       t[i]='a'+arr[(j+1)%c];
                         if(j+1>=c){
                        flag=1;
                    }
                        flag1=1;
                    }
                else{

                        t[i]= 'a'+arr[(j+flag)%c];
                    if(j+flag>=c){
                        flag=1;
                    }
                    else flag=0;
                }
                }

            }
           }
    }
    cout<<t<<endl;

}
