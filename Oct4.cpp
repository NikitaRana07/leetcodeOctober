class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        auto cmp = [](vector<int> &a, vector<int>&b){
            if(a[0]!=b[0])
                return a[0]<b[0];
            else
                return a[1]>b[1];
        };
        sort(intervals.begin(), intervals.end(), cmp);
        int res = 1;
        int i = 1;
        while(i<intervals.size())
        {
            int j = i-1;
            if(intervals[i][1]<=intervals[j][1]){
                while(i<intervals.size() && intervals[i][1]<=intervals[j][1])
                {
                    i++;
                }
            }
            else
            {
                i++;
                res++;
            }
            
        }
        return res;
    }
};
