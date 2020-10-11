class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        if(points.size()<2)
            return points.size();
        auto cmp = [](const vector<int> & a, const vector<int> & b ){
            if(a[1]!=b[1])
                return a[1]<b[1];
            else
                return a[0]<b[0];
        };
        sort(points.begin(), points.end(), cmp);   
        int balloones = 0;
        int t = INT_MIN;
        for(int i=0; i<points.size(); i++)
        {   
            if(t<points[i][0])
            {
                balloones+=1;
                t = points[i][1];
            }
        }
        
        return balloones;
    }
};
