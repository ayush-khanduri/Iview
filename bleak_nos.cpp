/*input
3
4
167
3
*/
// Bleak Numbers
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
bool count(int n,int sum)
{
    int cnt=0;
    int x=n;
    while(n>0)
    {
        cnt++;
        n=n&(n-1);
    }
    if(cnt+x==sum)
        return 0;

    return 1;
}


int main()
{
    _fast;
    int t,n,ans,i;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ans=1;
        for(i=1;i<n;i++)
        {
            int x=count(i,n);
            //is(x);
            ans=ans&x;
        }
        cout<<ans<<"\n";
    }
    return 0;
}