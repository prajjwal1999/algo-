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
        int r,g,b,w;cin>>r>>g>>b>>w;
        int q=min(r,min(g,b));
        r=r-q;
        g=g-q;
        b=b-q;
        int cnt=0;
        w=w+(3*q);
        if(r&1)
            cnt++;
        if(g&1)
            cnt++;
        if(b&1)
            cnt++;
        if(w&1)
            cnt++;
        if(cnt==3 ||cnt==4||cnt==2)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }

    return 0;

}