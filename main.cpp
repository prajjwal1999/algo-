#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll MOD=1e9+7;
#define endl '\n'
#define F first
#define S second
const double PI = 3.141592653589793238460;

  void c_p_c()
{
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  
  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
    #endif

}
ll printNcR(ll n, ll r) 
{ 
    long long int p = 1, k = 1; 
    if (n - r < r) 
        r = n - r; 
  
    if (r != 0) { 
        while (r) { 
            p *= n; 
            k *= r; 
  
            // gcd of p, k 
            long long int m = __gcd(p, k); 
            p /= m; 
            k /= m; 
  
            n--; 
            r--; 
        } 
    } 
  
    else
        p = 1; 
      return p; 
} 

int main()
{
    c_p_c();
  int n,i,j;
    cin>>n;
    vector<int>v;
    int bsev=0;
    int bfr=0;

    while(n>=0)
    {
        if(n%7==0)
        {
            bsev=n/7;
            n=0;
            break;
        }
        bfr++;
        n=n-4;
    }
    if(n==0)
    {
        while(bfr--) cout<<"4";
        while(bsev--) cout<<"7";
    }
    else cout<<"-1"<<endl;

    

    return 0;

}