class Solution {
public:
    bool isPalindrome(int x) {
        int newnumber = x , lastdigit;
        long long revno=0;
        if(x < 0){
            return false;
        }
        while(x!=0){
            lastdigit = x%10;
            revno = (revno*10) + lastdigit;
            x = x/10;
        }

        if(revno < INT_MAX && revno > INT_MIN){
            if(newnumber == revno){
                return true;
            }
        }
        return false;
       
    }
};