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
	ll h,p;cin>>h>>p;
	while(h>0 && p>0)
	{
		h=h-p;
		if(h>0)
		p=p/2;
		
	}
	if(p>0)
		cout<<"1"<<endl;
	else
		cout<<"0"<<endl;
  }
}