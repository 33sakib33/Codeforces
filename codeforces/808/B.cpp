    #include<iostream>
     
    using namespace std;
    int main(){
        int n, k; cin>>n>>k;
        double a[n], sum = 0;
        
        int size = n - k + 1;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum += a[i];
        }
        double tot = 0;
        for(int i=0; i<k; i++){
            tot += sum;
            sum -= (a[i] + a[n-1-i]);
        }
        printf("%.8f\n", tot/size); 
    }