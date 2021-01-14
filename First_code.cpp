//بسم الله الرحمن الرحيم

// ----->  Author :    N A Y E M
// ----->           [ CSE-19 , CU ]

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double,double> pdd;
typedef pair<ll,ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
//using u128 = __uint128_t;
#define el << '\n'
#define sz(v) ((int)(v).size())
#define PI 3.141592653589793238
#define _test_ int _ ; cin >> _ ; while( _-- )
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define file() freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout)
ll gcd ( ll  a, ll b ) { return __gcd ( a, b ); }
ll lcm ( ll a, ll b ) { return a * ( b / gcd ( a, b ) ); }
ll big_mod(ll base , ll power , ll mod){
    ll ret=1;base%=mod;while(power){if(power&1)ret=ret*base%mod;base=base*base%mod;power>>=1;}return ret;}
ll mod_inverse(ll a , ll mod ){ return big_mod(a,mod-2,mod);}
ull POW(ll a , ll b){if(b==0) return 1;ull ret=1;while(b--)ret*=a;return ret;}
int dx[]={0,0,+1,-1,+1,-1,-1,+1};
int dy[]={+1,-1,0,0,+1,-1,+1,-1};
// ------------------>
const ll infLL = 15e17+123;
const int inf = 1e9;
const ll mod = 1e9+7;
const ll mx = 1e2+123;
// ------------------>
int n,W;
ll w[mx],v[mx],dp[mx][100001];

ll solve(int index,int weight)
{
    if(dp[index][weight]!=-1) return dp[index][weight];
    if(index>=n) return 0 ;
    ll ret1=0,ret2=0;
    if(weight+w[index]<=W) ret1=v[index]+solve(index+1,weight+w[index]);
    ret2=solve(index+1,weight);
    return dp[index][weight]=max(ret1,ret2);
}

void _case_()
{
    memset(dp,-1,sizeof dp);
    cin >> n >> W ;
    for(int i=0;i<n;i++)
    {
        cin >> w[i] >> v[i];
    }
    cout << solve(0,0) el;
}

int main( )
{
    optimize();
    //_test_
        _case_();
    return 0;
}
