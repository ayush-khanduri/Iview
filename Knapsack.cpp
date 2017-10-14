/*input
4 5
1 8
2 4
3 0
2 5
2 3
*/
// 0-1 Knapsack
#include<bits/stdc++.h>
 
using namespace std;

#define ll             long long 
#define ld             long double
#define si(a)          scanf("%d",&a)
#define sl(a)          scanf("%lld",&a)
#define ss(a)          scanf("%s",a)                           
#define sc(a)          scanf("%c",&a)
#define pi(n)          printf("%d ",n)
#define pinl(n)        printf("%d\n",n)
#define pl(n)          printf("%lld",n)
#define plnl(n)        printf("%lld\n",n)
#define ps(n)          printf("%s",n)
#define psnl(n)        printf("%s\n",n)
#define pc(n)          printf("%c",n)
#define pcnl(n)        printf("%c\n",n)
#define f(i,a,b)       for(i=a;i<b;i++)
#define fd(i,a,b)      for(i=a;i>b;i--)
#define MOD5           100000
#define MOD7           10000000
#define MOD9           1000000000
#define PI             3.14159265358979323846
#define pb             push_back
#define mp             make_pair
#define all(n)         n.begin(),n.end()
#define fir            first
#define sec            second
#define is(a)          cout<<"Value is : "<<a<<endl
#define SET(a,b)       memset(a,b,sizeof(a))
#define _fast          ios_base::sync_with_stdio(0)
#define rr             freopen("in.txt", "r", stdin)
#define wr             freopen("out.txt", "w", stdout)

typedef vector<int> vi;
typedef pair<int,int> pi;
typedef pair<ll,ll> pl;
typedef pair<pl,ll> ppl;
typedef vector<pi> vpi;
typedef vector<ll> vl;
typedef pair<ll,ll> pl;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<pi> vpi;
typedef map<string, int> msi;

//all(0)vector<int> v(sz,0);
int cap,n,sz[2010],val[2010],dp[2010][2010],i,j;
int main()
{
    _fast;
    cin>>cap>>n;
    for(i=1;i<=n;i++)
    {
        cin>>sz[i]>>val[i];
    }

    SET(dp,0);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=cap;j++)
        {
            if(j-sz[i]>=0)
            {
                dp[i][j]=dp[i-1][j-sz[i]]+val[i];
                dp[i][j]=max(dp[i][j],dp[i-1][j]);
            }
            else
                dp[i][j]=dp[i-1][j];
        }
    }
    cout<<dp[n][cap]<<"\n";
    return 0;
}