/*
akchamp
Code for fun :)
Maximum Subarray Sum(Kadane)
O(n) + spcl case for all -ve numbers
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
    int n,i,a[10],c=0,maxsum;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<0)
        c++;
    }
    if(c==n)
    {
        maxsum=-MOD7;
    for(i=0;i<n;i++)
    {
        if(a[i]>maxsum)
        maxsum=a[i];
    }   
    }
    else
    {
    int maxsum_end_here=0,max_so_far=0;
    for(i=0;i<n;i++)
    {
        maxsum_end_here+=a[i];
        if(maxsum_end_here<0)
        maxsum_end_here=0;
        if(maxsum_end_here>max_so_far)
        max_so_far=maxsum_end_here;
    }
    maxsum=max_so_far;
    }
    cout<<maxsum;
    return 0;
}