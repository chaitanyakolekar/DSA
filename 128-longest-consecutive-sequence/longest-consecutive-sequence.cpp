class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int>st;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }

        int ans=0;
        int count=0;
        for(int it:st){
            cout<<it;
            if(st.find(it+1)!=st.end()){
                count++;
                
            }
            else{
                ans=max(ans,count);
                count=0;
            }
        }
        if(nums.size()==0){
            return 0;
        }
        return ans+1;
    }
};