/*
akchamp
Code for fun :)
PRTITION PROBLEM
*/
#include<bits/stdc++.h>
 
using namespace std;
 
#define ll             long long 
#define ld             long double
#define si(a)          scanf("%d",&a)
#define sl(a)          scanf("%lld",&a)
#define ss(a)          scanf("%s",a);                            
#define sc(a)          scanf("%c",&a);
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
ll dp[110][100000];
int main()
{
    ll t,n,i,sum,half,a[110],ans,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        sum=0;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        half=sum/2;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=half;j++)
            {
                if(j>=a[i])
                dp[i][j]=max(dp[i-1][j],dp[i-1][j-a[i]]+a[i]);
                else
                dp[i][j]=dp[i-1][j];
            }
        }
        ans=sum-2*dp[n][half];
        cout<<ans<<"\n";
        
    }
    
    return 0;
}