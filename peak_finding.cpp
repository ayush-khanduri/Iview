  #include <iostream>
  #include <algorithm>

    using namespace std;

    const int MAXN = 100000 + 5;

    long long a[MAXN], x, y, ret;
    int n, qn;

    int main()
    {
        ios_base::sync_with_stdio(false);
        cin >> n;
        for(int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        long long mid,first,last,ans;
        first=1;
        last=n;
        while(first<last)
        {
            mid=(first+last)/2;
            if(a[mid]<a[mid-1])
            {
                last=mid;
                continue;
            }
            if(a[mid]<a[mid+1])
            {
                first=mid+1;
                continue;
            }
            ans=mid;
            break;
        }
        if(ans>n || ans<1)
        ans=first;
        cout<<a[ans];
        return 0;
    }
