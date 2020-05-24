#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t!=0){
       int n1,n2,n3;
       cin>>n1>>n2>>n3;
       if(n1==0 && n2!=0 && n3!=0){
        for(int i=0;i<=n3;i++){
        cout<<"1";
       }
       cout<<"0";
       n2=n2-1;
        for(int i=1;i<n2;i=i+2){
         cout<<"10";
       }
       if(n2%2==1)cout<<"1";

       }
       else if(n3==0 && n1!=0 && n2!=0){
        for(int i=0;i<n1;i++){
         cout<<"0";
       }

       if(n2%2!=0){
        for(int i=0;i<n2;i=i+2){
            cout<<"01";
        }
       }

       if(n2%2==0){

        for(int i=0;i<n2-1;i=i+2){
            cout<<"01";
        }
        cout<<"0";
       }
       }
       else{
       if(n1!=0)
       for(int i=0;i<=n1;i++){
        cout<<"0";
       }
       if(n3!=0)
       for(int i=0;i<=n3;i++){
        cout<<"1";
       }
       if( n1 !=0 && n3!=0 && n2>=2){
        cout<<"0";
       }
       if(n1!=0 && n3!=0) {
        n2=n2-2;
       for(int i=1;i<n2;i=i+2){
         cout<<"10";
       }
       if(n2%2==1)cout<<"1";
       }
       else  if(n1==0 && n3==0){
        for(int i=0;i<n2;i=i+2){
         cout<<"10";
       }
       if(n2%2==0)cout<<"1";
       }
       }
        cout<<endl;
        t--;
    }
}
