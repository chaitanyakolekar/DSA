class Solution {
public:
    bool isPalindrome(string s) {
        string ans;
        for(int i=0;i<s.length();i++){
        
            if(s[i]==' '){
                continue;
            }
            s[i]=tolower(s[i]);
            if(s[i]>='a'&&s[i]<='z' || s[i]>='0' && s[i]<='9'){
            ans.push_back(s[i]);
            }
            else{
                continue;
            }
        }
        string ans2;
        
        for(int i=ans.length()-1;i>=0;i--){
            ans2.push_back(ans[i]);
            
        }
        if(ans==ans2){
            return true;
        }
        return false;
        
        }
        
    };
