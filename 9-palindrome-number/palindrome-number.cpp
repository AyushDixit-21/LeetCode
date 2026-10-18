class Solution {
public:
    bool isPalindrome(int x) {
        int newnumber = x ;
        long long revno=0;
        if(x < 0){
            return false;
        }
        while(x!=0){
            revno = (revno*10) + (x%10);
            x = x/10;
        }

        if(revno < INT_MAX && revno > INT_MIN){
            if(newnumber == revno){
                return true;
            }
            else{
                return false;
            }
        }
        return false;
       
    }
};