class Solution {
public:
int max(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
    return 0;
}
    int maxDepth(string s) {
      stack<char>st;
      int i=0;
      int maxi=0;
      while(i<s.length()){
        if(s[i]=='('){
            st.push(s[i]);
            maxi=max(maxi,st.size());
            i++;
        }
        else if(s[i]==')'){
            st.pop();
            i++;
        }
        else{
            i++;
        }
      } 
      return maxi;
    }
};