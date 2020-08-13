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
ll binpow(ll a, ll b, ll m) {
    a %= m;
    ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
std::vector<ll> adj[100005];
int main()
{
	c_p_c();
	int t;cin>>t;
	while(t--){
		map<ll,ll>mp;
		ll n,k;cin>>n>>k;
		ll a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			mp[a[i]]++;
		}
		ll ms=INT_MIN;ll cnt=0;
		for(auto i:mp)
		{
			ms=max(ms,i.S);
			if(i.S>1)
				cnt=cnt+i.S;
		}
		if(cnt>ms)
		cout<<ms<<endl;
	else
		cout<<cnt<<endl;
	}


}