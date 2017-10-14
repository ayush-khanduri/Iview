/*input
10 2
1 0 9
0 1 9
*/
// Fenwick Tree
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

ll arr[25],sum[26];
ll getsum(ll idx,ll n)
{
	ll i,sm=0;
	for(i=idx;i>=1;)
	{
		sm+=sum[i];
		i=i-(i&(-i));
	}
	return sm;
}

void update(ll x,ll val,ll n)
{
	ll i;
	for(i=x;i<=n;)
	{
		sum[i]+=val;
		i=i+(i&(-i));
	}
}
int main()
{
    _fast;
	ll n,i,q,l,r,up,idx,val;
	cin>>n>>q;

	for(i=0;i<n;i++)
	{
		arr[i]=i;
	}

	for(i=1;i<=n;i++)
	{
		update(i,arr[i-1],n);
	}

	while(q--)
	{
		cin>>up;
		if(up)
		{
			cin>>idx>>val;
			update(idx+1,val,n);
		}
		else
		{
			cin>>l>>r;
			cout<<getsum(r+1,n)-getsum(l,n)<<endl;
		}
	}
	return 0;
}