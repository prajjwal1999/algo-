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
	int t;
	cin>>t;
	while(t--)
	{
		string string1;
		string string2;
		string s;
		cin>>string1>>string2;
		ll sop=string1.size(),pos=string2.size();
		ll arr[27];
		memset(arr,0,sizeof(arr));
		ll arr1[27];
		for(int i=0;i<sop;i++)
		{
			arr[string1[i]-'a']++;
		}
		for(int i=0;i<pos;i++)
		{
			arr[string2[i]-'a']--;
		}
		for(int i=0;i<26;i++)
		arr1[i]=arr[i];
		for(int i=0;i<=(string2[0]-'a');i++)
		{   
			while(arr[i]>0)
			{
				s+=(char)(i+97);
				arr[i]--;

			}
		}
		s+=string2;
		for(int i=0;i<26;i++)
		{
			while(arr[i]>0)
			{
				s+=(char)(i+97);
				arr[i]--;
			}
		}
		string final;





		/////////////////////////////////////////////////////////
		for(int i=0;i<string2[0]-'a';i++)
		{
			while(arr1[i]!=0)
			{
				final+=(char)(i+97);
				arr1[i]--;
			}
		}
		final+=string2;
		for(int i=0;i<26;i++)
		{
			while(arr1[i]!=0)
			{
				final+=(char)(i+97);
				arr1[i]--;
			}
		}
		cout<<min(s,final)<<endl;
	}

return 0;




}