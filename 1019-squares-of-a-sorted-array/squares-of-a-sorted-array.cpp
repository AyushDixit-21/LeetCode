class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        int n = nums.size();

        for(int i = 0;i<=n-1;i++){
            nums[i] = nums[i]*nums[i];
        }

        for(int i =n-1;i>=1;i--){
            int didswap=0;
            for(int j=0;j<i;j++){
                if(nums[j]>nums[j+1]){
                    swap(nums[j+1],nums[j]);
                    didswap = 1;
                }
            }
            if(didswap == 0) break;
        }

        return nums;

        

        
    }
};