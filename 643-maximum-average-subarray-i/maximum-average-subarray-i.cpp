class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0;
        double avg=INT_MIN;
        double maxi=INT_MIN;
        int i=0;
        int j=0;
        int n=nums.size();
         while (j<n){
            sum += nums[j];
            if (j-i+1 > k){
                sum -= nums[i];
                i++;
            }
            if (j-i+1 == k){
                avg = sum/(j-i+1);
                maxi = max(maxi, avg);
            }
            j++;

         }

        
        return maxi;
    }
};