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

        for(int i=num.length()-1;i>=0;i--){
           
        if(((num[i]-'0')%2)!=0){
            return num.substr(0,i+1);
            }
            
        }
        
       
        return "";
    }
};