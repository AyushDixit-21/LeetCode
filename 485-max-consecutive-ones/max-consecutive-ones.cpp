class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int count = 0;

        for(int i=0;i<=n-1;i++){
            int compare = 0;
            while(i<n && nums[i]==1){
                compare++;
                i++;
            }
            if(compare>count){
                count = compare;
            }
        }

        return count;
        
    }
};