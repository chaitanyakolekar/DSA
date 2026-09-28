class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0;
      
        for(int i=0;i<nums.size();i++){
            while(j<nums.size() && (j<=i || nums[j]==0)){
                j++;
            }
            if(nums[i]==0 && j<nums.size()){
                swap(nums[i],nums[j]);
            }
        }
    }
};