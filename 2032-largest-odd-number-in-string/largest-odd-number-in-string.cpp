class Solution {
public:
    string largestOddNumber(string num) {
        int maxi=0;
        if(((num[num.length()-1]-'0')%2)!=0){
            return num;
        }

        for(int i=num.length()-1;i>=1;i--){
        if(((num[i]-'0')%2)!=0){
            return num.substr(0,i+1);
            }
            
        }
        
        for(int i=0;i<num.length();i++){
            int val=num[i]-'0';
            if(val%2!=0){
                maxi=max(val,maxi);
            }

        }
         string ans;
         if(maxi!=0){
         ans=to_string(maxi);
         return ans;
         }
         else{
          ans="";
         }
         return ans;
    }
};