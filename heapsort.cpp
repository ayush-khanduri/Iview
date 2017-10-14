//akchamp
//Heap Sort
//Complexity O(nlogn)
#include<bits/stdc++.h>

using namespace std;

#define ll             long long
#define si(a)          scanf("%d",&a)
#define sl(a)          scanf("%lld",&a)
#define ss(a)          scanf("%s",a);
#define sc(a)          scanf("%c",&a);
#define pi(n)          printf("%d",n)
#define pinl(n)        printf("%d\n",n)
#define pl(n)          printf("%lld",n)
#define plnl(n)        printf("%lld\n",n)
#define ps(n)          printf("%s",n)
#define psnl(n)        printf("%s\n",n)
#define pc(n)          printf("%c",n)
#define pcnl(n)        printf("%c\n",n)
#define Max(a,b)       ((a>b)?a:b)
#define Min(a,b)       ((a<b)?a:b)
#define f(i,a,b)       for(i=a;i<b;i++)
#define fd(i,a,b)      for(i=a;i>b;i--)
#define MOD5           100000
#define MOD7           10000000
#define MOD9           1000000000
#define pb             push_back
#define mp             make_pair
#define all(n)         n.begin(),n.end()

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

void max_heapify(ll a[],ll n,ll i)
{
    ll l,r,maxi;
    l=2*i;
    r=l+1;
    maxi=i;
    if(l<=n && a[l]>a[i])
    {
        maxi=l;
    }
    if(r<=n && a[r]>a[maxi])
    {
        maxi=r;
    }
    if(maxi!=i)
    {
        swap(a[i],a[maxi]);
        max_heapify(a,n,maxi);
    }
}

void build_max_heap(ll a[],ll n)
{
    ll i;
   for(i=n/2;i>0;i--)
   {
       max_heapify(a,n,i);
   }
}

void heapsort(ll a[],ll n)
{
  build_max_heap(a,n);
  ll i;
  for(i=n;i>1;i--)
  {
      swap(a[1],a[n]);
      n=n-1;
      max_heapify(a,n,1);
  }
}

int main()
{
    ll n,t,i,j,x,c,k;
    ll a[1000000];
    //sl(n);
    n=100000;
    f(i,1,n+1)
    {
        a[i]=rand()%(n)+1;
    }
      heapsort(a,n);
      f(i,1,n+1)
    {
        plnl(a[i]);
    }
    return 0;
}
