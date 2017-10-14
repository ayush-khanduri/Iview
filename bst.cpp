/*input
y 3
y -1
y 4
y -1
y -1
n
*/
// Binary Search Tree
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
struct tree
{
    int data;
    struct tree *left,*right;
}*root,*node;

void inorder(struct tree *root)
{
    if(root==NULL)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(struct tree *root)
{
    if(root==NULL)
        return;
    cout<<root->data<<" ";
    inorder(root->left);
    inorder(root->right);
}

void postorder(struct tree *root)
{
    if(root==NULL)
        return;
    inorder(root->left);
    inorder(root->right);
    cout<<root->data<<" ";
}

void insert(int t,struct tree *root)
{
    if(root->data>t)
    {
        if(root->left!=NULL)
            insert(t,root->left);
        else
        {
            root->left=(struct tree*)malloc(sizeof(struct tree));
            root=root->left;
            root->data=t;
            root->left=root->right=NULL;
        }
    }
    else
    {
        if(root->right!=NULL)
            insert(t,root->right);
        else
        {
            root->right=(struct tree*)malloc(sizeof(struct tree));
            root=root->right;
            root->data=t;
            root->left=root->right=NULL;
        }
    }
}

int main()
{
    int t;
    char ch='n';
    root=NULL;
    cin>>ch;
    while(ch=='y')
    {
        cin>>t;
        if(root==NULL)
        {
            root=(struct tree*)malloc(sizeof(struct tree));
            root->data=t;
            root->left=NULL;
            root->right=NULL;
        }
        else
            insert(t,root);
        cin>>ch;
    }

    inorder(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    return 0;
}