/*input
5
1 2 3 4 5
15
*/

//Binary Search
#include<bits/stdc++.h>

using namespace std;

int binary(int a[],int first,int last,int x)
{
    int mid;
    mid=(first+last)/2;
    if(a[mid]==x)
    {
        return mid;
    }
    if(first>=last)
    {
        return -1;
    }
    if(a[mid]>x)
    {
        last=mid-1;
        binary(a,first,last,x);
    }
    else
    {
        first=mid+1;
        binary(a,first,last,x);
    }
}

int main()
{
    int n,x,a[10],b,first,last,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
   // cout<<"Num to find";
    cin>>x;
    first=0;
    last=n-1;
    b=binary(a,first,last,x);
    b==-1?cout<<"Not found":cout<<b;
    cout<<endl;
}
