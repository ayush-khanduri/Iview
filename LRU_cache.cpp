#include<bits/stdc++.h>

using namespace std;

class LRUCache {
public:
    int size;
    list< pair<int,int> > l1;
    map<int,list<pair<int,int> >::iterator> mtp;
    pair<int,int> p;
    list<pair<int,int> >::iterator it;
public:
    LRUCache(int capacity) {
        size=capacity;
    }
    
    void put(int key, int value) {
        //found toh update val and bring in front
        if(mtp.find(key)!=mtp.end())
        {
            l1.erase(mtp[key]);
            l1.push_front(make_pair(key,value));
            mtp[key]=l1.begin();
        }
        //insert new into map and front
        else
        {
            if(l1.size()==size)
            {
                p=l1.back();
                l1.pop_back();
                mtp.erase(p.first);
            }
            p.first=key;
            p.second=value;
            l1.push_front(p);
            mtp[key]=l1.begin();
        }        
    }

    int get(int key) {
        //found toh bring in front and return
        if(mtp.find(key)!=mtp.end())
        {
            it=mtp[key];
            p=*it;
            l1.erase(mtp[key]);
            l1.push_front(make_pair(key,p.second));
            mtp[key]=l1.begin();
            return p.second;
        }
        else
        {
            return -1;
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache obj = new LRUCache(capacity);
 * int param_1 = obj.get(key);
 * obj.put(key,value);
 */
int main()
{

    LRUCache obj(2);
    obj.put(1,1);
    obj.put(2,2);
    cout<<obj.get(1);
    return 0;
}