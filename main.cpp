#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mx=1e5+123;
int n,k,a[mx],dp[mx];

ll solve(int index)
{
    if(dp[index]!=-1) return dp[index];
    if(index==n) return 0;
    if(index>n) return INT_MAX;
    ll ret=INT_MAX;
    for(int i=1;i<=k;i++)
    {
        ret=min(ret,abs(a[index+i]-a[index])+solve(index+i));
    }
    return dp[index]=ret;
}

int main()
{
    memset(dp,-1,sizeof dp);
    cin >> n >> k;
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
    }
    cout << solve(1) << endl;
    return 0;
}