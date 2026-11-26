class Solution {
public:
    bool canAliceWin(int n) {
        if(n<10){
            return false;
        }
        int al=10;
        int bo=9;
        int count=0;
        while(n>=0){
        if(count==0 && n>=al){
            n=n-al;
            al=bo-1;
            count=1;
        }
        else if(count==1 && n>=bo){
            n=n-bo;
            bo=al-1;
            count=0;
        }
        else break;
        }
        if(count==1){
            return true;
        }
        return false;
    }
};