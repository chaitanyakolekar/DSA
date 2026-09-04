class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        set<int>st;
        vector<int>ans;
        for(int i=0;i<friends.size();i++){
            st.insert(friends[i]);
        }
        for(int j=0;j<order.size();j++){
            if(st.find(order[j])!=st.end()){
                ans.push_back(order[j]);
            }
            }
        
        return ans;
    }
};