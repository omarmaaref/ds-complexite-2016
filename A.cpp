#include<bits/stdc++.h>
using namespace std;

#define FOR(i, x, y) for (int i = (x); i <= (y); i++)
#define forr(i, x, y) for (int i = (x); i < (y); i++)
#define forrl(i, x, y) for (ll i = (x); i < (y); i++)
#define dow(i, x, y) for (int i = (x); i >= (y); i--)

#define mp make_pair
#define F first
#define S second
#define pb push_back
#define siz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define fil(a, b) memset((a), (b), sizeof(a))

typedef long long ll;
typedef unsigned long long ull;

const int MOD=1e9+7;
const double pi=acos(-1);
const int MAX=2*1e5+5;
const int N=1e5+5;
void solve(){
	int s;
	cin>>s;
	vector<int> a(6,0),dp(max(s+1,31),1e6);
	a={1,3,6,12,24,30};
	dp[0]=0;
	for(auto i :a){dp[i]=1;}
	forr(i,2,s+1){
		for(auto j:a){
		if (i<j)
		break;
		dp[i]=min(dp[i],dp[i-j]+1);
		}
	}
cout<<dp[s]<<endl;
}
int main(){	

    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    ll t=1;
	//init();
   // cin>>t;
	for (ll i = 1; i <= t; i++)
	{
		// cout<<"Case "<<i<<": ";
        solve();
	}
	return 0;
}	
