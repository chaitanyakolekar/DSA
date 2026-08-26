class Solution {
public:
    int maxArea(vector<int>& nums) {
        long long area=0;
        int height=0;
        int length=0;
        int i=0;
        long long maxi=-1;
        int j=nums.size()-1;
        while(i<j){
            height=min(nums[i],nums[j]);
            length=j-i;
            area=length*height;
            maxi=max(maxi,area);
            if(nums[i]<nums[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return maxi;
    }
};