class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int i = 0, j = 1;
        int res = 0;
        int candj = -99, candi = -99;
        while(i<j && j<nums.size() && i<nums.size())
        {
            if(nums[j]-nums[i]==k)
            {
                if(candj!=nums[j] || candi!=nums[i])
                {
                    res+=1;
                    candj = nums[j];
                    candi = nums[i];
                }
                i++;
                j++;
            }
            else if(nums[j]-nums[i]>k)
            {
                i++;
                if(i==j)
                    j++;
            }
            else
            {
                j++;
            }
        }
        return res;
    }
};
