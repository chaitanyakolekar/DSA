class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
         vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        int k=lower;
        for(int i=0;i<nums.size() && k<=upper;i++){
            if(nums[i]==k){
                   k++;
            }
              if(nums[i]!=k && nums[i]>k){
                int x=min(nums[i]-1,upper);
                ans.push_back({k,x});
                k=nums[i]+1;
              }
              

        }
        if(k<=upper)
        ans.push_back({k,upper});
        return ans;
    }
};