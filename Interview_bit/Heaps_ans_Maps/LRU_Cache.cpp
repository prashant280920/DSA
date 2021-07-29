#include<bits/stdc++.h>
using namespace std;

class LRUCache{
    int max_size = 0;
    map<int,int> m;
    vector<int> l;
    public:
    LRUCache(int capacity);
    int get(int key);
    void set(int key, int value);
};

LRUCache::LRUCache(int capacity){
    m.erase(m.begin(), m.end());
    l.erase(l.begin(), l.end());
    max_size=capacity;
}
int LRUCache::get(int key) {
    int val = -1;
    if(m.find(key)!=m.end()){
        auto it = find(l.begin(), l.end(), key);
        l.erase(it);
        l.push_back(key);
        val = m[key];
    }
    return val;
}

void LRUCache::set(int key, int value) {
    if(m.find(key)!=m.end()){
        m[key] = value;
        auto it = find(l.begin(), l.end(), key);
        l.erase(it);
        l.push_back(key);
    }else{
        if(max_size == m.size()){
            auto first = l.begin();
            m.erase(l[0]);
            
            l.erase(first);
        }
        m[key] = value;
        l.push_back(key);
    }
}

int main(){
    LRUCache c(2);
    c.set(1,10);
    c.set(5,12);
    cout << c.get(5)<<"\n";
    cout << c.get(1)<<"\n";
    cout << c.get(10)<<"\n";
    c.set(6,14);
    cout << c.get(5)<<"\n";
    
    return 0;
}