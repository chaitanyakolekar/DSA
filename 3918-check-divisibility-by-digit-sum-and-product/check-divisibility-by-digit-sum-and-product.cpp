class Solution {
public:
    bool checkDivisibility(int n) {
        int x=n;
        long long sum=0;
        int product=1;     
        while(n>0){
            sum+=n%10;
            product=product*(n%10);
            n=n/10;
        }
        int ans=sum+product;
        if(x%ans==0){
            return true;
        }
        else return false;
    }
};