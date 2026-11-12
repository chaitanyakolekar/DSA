class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int maxi=1;

        while(i<n-1){
            int cnt=1;
            
          while(i<n-1 && nums[i]>nums[i+1]){
                cnt++;
                maxi=max(cnt,maxi);
                i++;
            }
            
            cnt=1;
          while(i<n-1 && nums[i]<nums[i+1] ){
                cnt++;
                maxi=max(cnt,maxi);
                i++;
            }
            if (i < n - 1 && nums[i] == nums[i + 1]) {
                i++;
            }
        }
        return maxi;
    }
};