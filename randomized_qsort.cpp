//akchamp
//randomized quick sort
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

int part(int a[],int first,int last)
{
    int pivot,x,key,i,j,n,y;
    pivot=rand()%(last-first+1)+first;
    swap(a[last],a[pivot]);
    key=a[last];
    i=first-1;
    for(j=first;j<last;j++)
    {
        if(a[j]<=key)
        {
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[last]);

    return i+1;

}

void qsort(int a[],int first,int last)
{
    if(first<last)
    {
        int pivot=part(a,first,last);
        qsort(a,first,pivot-1);
        qsort(a,pivot+1,last);
    }
}

int main()
{
    int n,first,last,i;
    //si(n);
    n=100000;
    int a[n+1];
    f(i,0,n)
    a[i]=rand()%(n)+1;

    first=0;
    last=n-1;
    qsort(a,first,last);
    f(i,0,n)
    pinl(a[i]);
    return 0;
}
