#include<bits/stdc++.h>
using namespace std;
#define mod 1000000009
#define cin1(x) cin>>x
#define cin2(x,y) cin>>x>>y
#define cin3(x,y,z) cin>>x>>y>>z
#define ll long long
#define mp make_pair
#define pb push_back
#define nl printf("\n")
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
const int todx[] = { -2, -2, -1, -1,  1,  1,  2,  2 };
const int tody[] = { -1,  1, -2,  2, -2,  2, -1,  1 };
bool sortbysec(const pll &a,
              const pll &b)
{
    if(a.ss==b.ss){
    	return (a.ff<b.ff);
    }
    return (a.ss==b.ss);
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
    else return gcd(b,a%b);
}
void printStack(stack<string> s){
    if(s.empty())return;

    string x=s.top();
    s.pop();
    printStack(s);
    cout<<x;
    s.push(x);

}


ll binaryexp(ll n,ll p){

    if(p==0) return 1;
    if(p%2==0) return binaryexp((n%mod)*(n%mod),p/2);
    else return ((n%mod)*binaryexp(((n%mod)*(n%mod))%mod,(p-1)/2)%mod);

}

#define meax 10000001
vll spf(meax,0);
void siv(){
    spf[1]=1;

   for(ll i=2;i<meax;i++)spf[i]=i;

   for(ll i=4;i<meax;i+=2){
        spf[i]=2;
    }
    for(ll i=3;i*i<meax;i++){
        if(spf[i]==i){
            for(ll j=i*i;j<meax;j+=i){
                if(spf[j]==j){
                    spf[j]=i;
                }
            }
        }
    }
}



int main(){
 ll n;
 ll x,y;
 cin>>x;
 cin>>y>>n;
 ll a=0,b=0;
 
 
 	long double min1=1000000;
 	vpll vc;
 	//cout<<x<<endl;
 	for(int i=n;i>=1;i--){
 		ll a1= (i*x+y-1)/y;
 		ll a2= (i*x)/y;
 		//cout<<a1<<" "<<a2<<endl;
 		 
 		long double d1=abs((long double)x/(long double)y-(long double)a1/(long double)i);
 		long double d2=abs((long double)x/(long double)y-(long double)a2/(long double)i);
 		
 		//cout<<d1<<" "<<d2<<endl;
 		if(d1==d2){
 			if(a1<=a2){
 				if(min1>=d1){
 				if(min1==d1){
 					if(a1==a){
 						if(i<b){
 							b=i;
 							a=a1;
 						}
 					}
 					else if(a1<a){
 						b=i;
 						a=a1;
 					}
 				}
 				else{
 					b=i;
 					a=a1;
 				}
 				min1=d1;
 			}
 			}
 			else{
 			if(min1>=d2){
 				if(min1==d2){
 					if(a2==a){
 						if(i<b){
 							b=i;
 							a=a2;
 						}
 					}
 					else if(a2<a){
 						b=i;
 						a=a2;
 					}
 				}
 				else{
 					b=i;
 					a=a2;
 				}
 				min1=d2;
 			}
 			}
 		}
 		else if(d1<d2){
 			if(min1>=d1){
 				if(min1==d1){
 					if(a1==a){
 						if(i<b){
 							b=i;
 							a=a1;
 						}
 					}
 					else if(a1<a){
 						b=i;
 						a=a1;
 					}
 				}
 				else{
 					b=i;
 					a=a1;
 				}
 				min1=d1;
 			}
 		}
 		else{
 			if(min1>=d2){
 				if(min1==d2){
 					if(a2==a){
 						if(i<b){
 							b=i;
 							a=a2;
 						}
 					}
 					else if(a2<a){
 						b=i;
 						a=a2;
 					}
 				}
 				else{
 					b=i;
 					a=a2;
 				}
 				min1=d2;
 			}
 		}
 		
 	
 	}
 	
 	//cout<<"hello";
 	for(ll i=min(a,b);i>1;i--){
 		if(a%i==0 && b%i==0){
 			a/=i;
 			b/=i;
 			i=min(a,b)-1;
 			
 		}
 	}
 	//sort(vc.begin(),vc.end(),sortbysec);
 	//pll itr=*vc.begin();
 	
 	cout<<a<<"/"<<b<<endl;
 
 
 

}



























