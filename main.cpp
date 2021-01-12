//بسم الله الرحمن الرحيم

// ----->  Author :    N A Y E M
// ----->           [ CSE-19 , CU ]

#include<bits/stdc++.h>
using namespace std ;
typedef long long ll;
typedef unsigned long long ull ;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;
//using u128 = __uint128_t;
#define el << '\n'
#define sz(v) ((int)(v).size())
#define PI 3.141592653589793238
#define _test_ int _ ; cin >> _ ; while( _-- )
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define file() freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout)
ll gcd ( ll  a, ll b ) { return __gcd ( a, b ) ; }
ll lcm ( ll a, ll b ) { return a * ( b / gcd ( a, b ) ) ; }
ll big_mod(ll base , ll power , ll mod){
    ll ret=1;base%=mod;while(power){if(power&1)ret=ret*base%mod;base=base*base%mod;power>>=1;}return ret;}
ll mod_inverse(ll a , ll mod ){ return big_mod(a,mod-2,mod);}
ull POW(ll a , ll b){if(b==0) return 1;ull ret=1;while(b--)ret*=a;return ret;}
int dx[]={0,0,+1,-1,+1,-1,-1,+1} ;
int dy[]={+1,-1,0,0,+1,-1,+1,-1} ;
// ------------------>
const ll infLL = 1e15;
const int inf = 1e9;
const ll mod = 1e4+7;
const ll mX = 1e5+123;
// ------------------>
ll n ,dp[mX][4],a[mX][4] ;

ll solve(int index,int choice)
{
    if(dp[index][choice]!=-1) return dp[index][choice];
    if(index>n) return 0;
    ll ret=0;
    for(int i=1;i<4;i++)
    {
        if(i!=choice)
            ret=max(ret,(a[index][i]+solve(index+1,i)));
    }
    return dp[index][choice]=ret;
}

void _case_()
{
    memset(dp,-1,sizeof dp);
    cin >> n ;
    for(int i=1;i<=n;i++)
    {
        cin >> a[i][1] >> a[i][2] >> a[i][3] ;
    }
    cout << solve(1,0) el;
}

int main( )
{
    optimize() ;
    //_test_
        _case_() ;
    return 0 ;
}