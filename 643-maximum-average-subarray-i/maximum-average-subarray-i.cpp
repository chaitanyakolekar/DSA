class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0;
        double avg=INT_MIN;
        double maxi=INT_MIN;
        int i=0;
        int j=0;
        int n=nums.size();
        
            while(i<=(n-k) && j<(k+i)){
            sum+=nums[j];
            j++;
            if(j==(k+i)){
                maxi=max(maxi,sum);
                sum-=nums[i];
                i++;
            }
            }
            avg=maxi/k;
            return avg;
    }
};