/*input
8
6
5
2
7
1
6
8
7
*/
// Merge Sort
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
int a[10];

void mergesort(int start,int end,int mid)
{
    vi v1,v2;
    int i,j,k;
    for(i=start;i<=mid;i++)
        v1.pb(a[i]);

    for(i=mid+1;i<=end;i++)
        v2.pb(a[i]);   

    i=0,j=0,k=start;
    while(i<v1.size()&&j<v2.size())
    {
        if(v1[i]<v2[j])
        {
            a[k++]=v1[i];
            i++;
        }
        else
        {
            a[k++]=v2[j];
            j++;        
        }
    }
    while(i<v1.size())
    {
        a[k++]=v1[i];
        i++;
    }
    while(j<v2.size())
    {
        a[k++]=v2[j];
        j++;
    }
}

void partition(int start,int end)
{
    if(start==end)
    {
        return;
    }
    int mid=(start+end)/2;
    partition(start,mid);
    partition(mid+1,end);
    mergesort(start,end,mid);
}

int main()
{
    int n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    partition(0,n-1);

    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}