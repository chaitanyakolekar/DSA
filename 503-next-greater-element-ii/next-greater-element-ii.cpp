class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n=nums.size();
        int j=2*n-1;
        vector<int>ans;
        stack<int>st;
        while(j>=0){
            if(st.empty()){
                st.push(nums[j%n]);
                ans.push_back(-1);
                j--;
            }
            else if(st.top()>nums[j%n]){
                ans.push_back(st.top());
                st.push(nums[j%n]);
                j--;
            }
            else{
                while(!st.empty() && st.top()<=nums[j%n]){
                    st.pop();
                }
                if(st.empty()){
                    ans.push_back(-1);
                }
                else{
                    ans.push_back(st.top());
                }
                st.push(nums[j%n]);
                j--;
            }
            
        }
       reverse(ans.begin(),ans.end());
       ans.resize(n);
            return ans;
    }
};