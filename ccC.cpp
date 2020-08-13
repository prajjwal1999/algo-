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
		ll a,b;cin>>a>>b;
		ll power_of_a;ll power_of_b;
		if(a<10)
			power_of_a=1;
		else
		{
			if(a%9!=0)
			power_of_a=(a/9)+1;
			else
				power_of_a=a/9;
		}
		if(b<10)
			power_of_b=1;
		else
		{
			if(b%9!=0)
			power_of_b=(b/9)+1;
			else
				power_of_b=b/9;
		}
		if(power_of_b==power_of_a)
			cout<<"1 "<<power_of_b<<endl;
		else if(power_of_b<power_of_a)
			cout<<"1 "<<power_of_b<<endl;
		else
			cout<<"0 "<<power_of_a<<endl;

	}
}