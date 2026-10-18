class Solution {
public:
    int reverse(int x) {
        int lastdigit;
        long long revno=0;

        while(x!=0){
            lastdigit = x%10;
            revno = (revno*10) + lastdigit;
            x = x/10;
        }

        if(revno > INT_MAX || revno< INT_MIN){
            return 0;
        }
        return revno;
          
    }
};