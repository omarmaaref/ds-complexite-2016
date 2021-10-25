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
	int n,d;
	cin>>n>>d;
	vector<int> a(n+2,0);
	forr(i,0,n+2){
		cin>>a[i];}
		forr(i,0,n)
		if (a[i+1]-a[i]>d){cout<<"NO\n";return;}

		cout<<"YES\n";
	
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
