    #include<bits/stdc++.h>
    using namespace std;
    int n,h,l,r;
    vector<int> a(2001,0);
    int dp [2100][2100];
    int solve(int i,int s){
        if(i>=n)return 0;
        if(i==n-1){
            int m=(s+a[i])%h;
             int m2=((s+a[i]-1)%h+h)%h;
            if(l<=m && m<=r){
                dp[i][m]=1;
            }
            else if(l<=m2 && m2<=r){
                dp[i][m]=1;
            }
            else dp[i][m]=0;


            return dp[i][m];
        }
        if(dp[i][s]!=-1){
            return dp[i][s];
        }
         int m=(s+a[i])%h;
         int m2=((s+a[i]-1)%h+h)%h;
         int ans1=solve(i+1,m);
         int ans2=solve(i+1,m2);
         if(l<=m && m<=r)ans1++;
         if(l<=m2 && m2<=r)ans2++;
         int d=max(ans1,ans2);
         dp[i][s]=d;
         return dp[i][s];

    }
    int main(){
        ios_base::sync_with_stdio(false);
         cin.tie(NULL);
        cin>>n>>h>>l>>r;
        memset(dp,-1,sizeof(dp));
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int d=solve(0,0);
        cout<<d<<endl;
    }
