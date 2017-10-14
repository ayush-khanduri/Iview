/*
akchamp
Code for fun :)
dfs
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
#define is(a)          cout<<"Value is : "<<a<<endl

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
/*clock_t st,ed;
st = clock();
ed = clock();
float tme = (float)(ed-st)/(float)(CLOCKS_PER_SEC);
cout<<setprecision(4)<<fixed<<tme<<endl;*/
//all(0)vector<int> minD(sz,0);
bool vis[10];
vi a[10];
vi::iterator it;
stack<int> s;
void dfs(int x)
{
    int v;
    s.push(x);
    while(!s.empty())
    {
    v=s.top();
    s.pop();
    if(!vis[v])
    {
        vis[v]=true;
        cout<<v<<endl;
        it=a[v].begin();
        while(it!=a[v].end())
       {
           s.push(*it);
           it++;
       }
    }
    }
    
}


int main()
{
    int n,e,i,x,y,j,cc=0;
    cin>>n>>e;
    for(i=0;i<e;i++)
    {
        cin>>x>>y;
        a[x].pb(y);
        a[y].pb(x);
    }
    //dfs(x);
    for(i=1;i<=n;i++)
    {
        if(!vis[i])
       { dfs(i);
       cc++;
       }
        
    }
    cout<<"Num of conn comp "<<cc;
    /*
    for(i=1;i<=n;i++)
    {
        for(j=0;j<a[i].size();j++)
        {
            cout<<i<<"->"<<a[i][j]<<endl;
        }
    }
    */
    return 0;
}