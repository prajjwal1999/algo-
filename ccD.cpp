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
	int t;cin>>t;while(t--)
	{

	string s;cin>>s;
	string p;cin>>p;
	multiset<char>box;
	if(s.length()==1)
		cout<<s;
	else if(s.length()==p.length())
		cout<<s;
	else{
	for(int i=0;i<s.length();i++)
	{
		box.insert(s[i]);

	}

	for(int i=0;i<p.length();i++)
	{
		auto it=box.find(p[i]);
		if(it!=box.end())
			box.erase(it);
	}
	auto it=box.begin();
	int flag=0;
	 for (it = box.begin(); it != box.end(); it++) 
        {
        	if(*it<=p[0])
        		cout<<*it;
        	else{
        		flag=1;
        		cout<<p;
        		break;
        	}
        }
        for (auto it1=it; it1 != box.end(); it1++) 
        {
        	cout<<*it1;
        }
        if(flag==0)
        	cout<<p;
    }
        cout<<endl;
    }




}