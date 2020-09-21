#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[2000][2000];
int f[2000];
int x,y,x1=0,y1=0;
int c=0;
void read(){
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];

        }
    }


}
void solve(){
    int f=0;
   vector<int> c(n+1,0);
   for(int i=0;i<n;i++){
     c[i]=0;
   }
   int s=0;
   for(int i=0;i<n;i++){
    s^=a[i][c[i]];
   }
   if(s==0){
         f=1;
    for(int i=0;i<n;i++){
        for(int j=1;j<m;j++){
            if(a[i][c[i]]!=a[i][j]){
                c[i]=j;
                f=0;
                break;
            }
        }
        if(!f)break;
    }
   }
   if(!f){
        cout<<"TAK\n";
   for(int i=0;i<n;i++){
    cout<<c[i]+1<<" ";
   }
   }
   else{
    cout<<"NIE\n";
   }
   cout<<endl;
}
int main(){
    read();
    solve();
}
