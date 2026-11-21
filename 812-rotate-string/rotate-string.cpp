class Solution {
public:
    bool rotateString(string s, string goal) {
        int i=0;
      while(i<=s.length()+1){
        if(s==goal){
            return true;
        }
        char x=s[0];
        s.erase(s.begin());
        s.push_back(x);
        i++;
      }  
      return false;
    }
};