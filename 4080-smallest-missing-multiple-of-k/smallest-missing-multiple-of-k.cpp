class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
       unordered_set<int>st;

       for(auto &i:nums){
        st.insert(i);

       }
        int ans=k;
        while(st.find(ans)!=st.end()){
                ans += k;
       }
       return ans;
       
    }
};