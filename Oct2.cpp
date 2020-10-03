class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        combinationSum(candidates, target, ans, {}, 0);
        return ans;
    }
private:
    void combinationSum(vector<int> candidates, int target, vector<vector<int>>&ans, vector<int> comb, int p){
      if(!target)
      {
        ans.push_back(comb);
        return;
      }
      
      for(int i=p; i<candidates.size() && target>=candidates[i]; i++)
      {
        comb.push_back(candidates[i]);
        combinationSum(candidates, target-candidates[i], ans, comb, i);
        comb.pop_back();
      }
    }
};
