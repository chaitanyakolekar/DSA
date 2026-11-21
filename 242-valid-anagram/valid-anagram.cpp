class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>mp1,mp2;
        if(s.length()!=t.length()){
            return false;
        }
        for(int i=0;i<s.length();i++){
            mp1[s[i]]++;
            mp2[t[i]]++;
        }
        for(int i=0;i<s.length();i++){
            if(mp2[s[i]]==mp1[s[i]] && mp1.find(t[i])!=mp1.end()){
                continue;
            }
            else{
                return false;
            }
        }
        return true;
    }
};