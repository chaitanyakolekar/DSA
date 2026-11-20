class Solution {
public:
int max(int x,int y){
    if(x>y){
        return x;
    }
    return y;
}
    string largestOddNumber(string num) {
        int maxi=0;
        if(((num[num.length()-1]-'0')%2)!=0){
            return num;
        }

        for(int i=num.length()-1;i>=1;i--){
            int val=num[i]-'0';
            if(val%2!=0){
            maxi=max(val,maxi);
            }
        if(((num[i]-'0')%2)!=0){
            return num.substr(0,i+1);
            }
            
        }
        
        string ans="";
        if((num[0]-'0')%2!=0){
            maxi=max(maxi,num[0]-'0');
        }
        if(maxi!=0){
            ans=to_string(maxi);
        }
        return ans;
        
        
    }
};