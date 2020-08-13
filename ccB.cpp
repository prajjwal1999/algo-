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

int main()
{
	c_p_c();
	int t;cin>>t;
	while(t--)
	{
		ll n,x;
		cin>>n>>x;
		ll a[n];
		for(ll i=0;i<n;i++)cin>>a[i];
			ll ms=INT_MAX;
		ll ans,player;ll cnt=0;
		for(ll i=0;i<n;i++)
		{
			if(a[i]<=x and x%a[i]==0)
			{
				ans=x/a[i];
				if(ans<ms)
				{
					player=a[i];
					ms=ans;
				}
				cnt++;
			}
		}
		if(cnt==0)
			cout<<"-1"<<endl;
		else
		cout<<player<<endl;

	}
}