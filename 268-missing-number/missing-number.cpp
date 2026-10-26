class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();

        for(int j=0;j<=n;j++){
            int compare = 0;
            for(int k=0;k<=n-1;k++){
                if(j==nums[k]){
                    compare =1;
                }
            }
            if(compare==0) return j;

        }
        return 0;
        
    }
};