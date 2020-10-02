class RecentCounter {
public:
    vector<int> v;
    RecentCounter() {
    }
    
    int ping(int t) {
        v.push_back(t);
        int count = 1;
        
        for(int i=v.size()-2; i>=0; i--)
        {
            if(t-v[i]<=3000)
                count++;
            else
                break;
        }
        
        return count;
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
