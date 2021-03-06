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
long long int binpow(long long int a, long long int b, long long int m=MOD) {
    a %= m;
    long long int res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

int main()
{
	c_p_c();
	int t;cin>>t;
	while(t--)
	{
		ll n;cin>>n;
		ll a[n];
		for(int i=0;i<n;i++)cin>>a[i];
		for(int i=n-1;i>=0;i--)
		{
			cout<<binpow(2,i)<<" ";
		}
		cout<<endl;
	}
}