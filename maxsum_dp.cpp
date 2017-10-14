/*input
5
-1 
-2
-3
-7
-8
/*
akchamp
Code for fun :)
Maximum Subarray Sum(DP)
O(n) best way
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

int main()
{
    int n,i,a[10],maxsum;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int max_so_far=a[0],current_sum=a[0];
    
    for(i=1;i<n;i++)
    {
        current_sum=max(a[i],a[i]+current_sum);
        max_so_far=max(max_so_far,current_sum);
    }
    maxsum=max_so_far;
    cout<<maxsum;
    return 0;
}