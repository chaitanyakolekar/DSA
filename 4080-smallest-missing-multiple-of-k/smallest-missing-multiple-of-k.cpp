class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
       set<int>st;
       int mx=0;
       for(auto &i:nums){
        st.insert(i);
        mx=max(i,mx);
       }
        int ans=0;
       for(int i=1;i<=mx+1;i++){
        if(st.find(i*k)==st.end()){
                ans=i*k;
                break;
        }
       }
       return ans;
       
    }
};