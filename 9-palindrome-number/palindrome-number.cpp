class Solution {
public:
    bool isPalindrome(int x) {
       long long ans=x;
       long long rev=0;
       while(ans!=0){
        rev=rev*10+ans%10;
        ans=ans/10;
       } 
       if(rev==x && x>=0){
        return true;
       }
       return false;
    }
};