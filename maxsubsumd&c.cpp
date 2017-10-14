/*
akchamp
Code for fun :)
Maximum Subarray Sum(Divide & Conquer)
O(nlogn) other efficient algos to follow..
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

int crossum(int a[],int first,int mid,int last)
{
    int sum=0,leftsum=-MOD7,i;
    
    for(i=mid;i>=first;i--)
    {
        sum+=a[i];
        if(leftsum<sum)
        leftsum=sum;
    }
    
    sum=0;
    int rightsum=-MOD7;
    
    for(i=mid+1;i<=last;i++)
    {
        sum+=a[i];
        if(rightsum<sum)
        rightsum=sum;
    }
    
    return (leftsum+rightsum);
}

int subsum(int a[],int first,int last)
{
    if(first==last)
    return a[first];
    
    int mid=(first+last)/2;
    
    int x,y,z;
    x=subsum(a,first,mid);
    y=subsum(a,mid+1,last);
    z=crossum(a,first,mid,last);
    return max(x,max(y,z));
}

int main()
{
    int n,i,a[10];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int maxsum=subsum(a,0,n-1);
    cout<<maxsum;
    return 0;
}