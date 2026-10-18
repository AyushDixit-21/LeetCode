class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum = 0,originalnum = num;
        for(int i =1;i<sqrt(num);i++){
            if(num%i == 0){
                sum = sum + i;
                if((num/i)!=i && i!=1){
                    sum = sum + (num/i);
                }
            }
        }
        if(sum == num){
            return true;
        }

        return false;
    }
};