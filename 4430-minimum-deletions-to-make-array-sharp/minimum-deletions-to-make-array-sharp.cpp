class Solution {
public:
    int minDeletions(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int j=i+1;
        int count=0;
        while(i<=n-2 && j<=n-1){
            if(nums[i]==nums[j]){
                count++;
                i++;
                j++;
            }
            else{
                i++;
                j++;
            }
        }
        return count;
    }
};