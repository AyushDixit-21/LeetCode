class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n = nums.size();
        int count = 1;
        int k =n-1;

        for (int i = n - 1; i >= 1; i--) {
            int didswap = 0;
            for (int j = 0; j < i; j++) {
                if (nums[j] > nums[j + 1]) {
                swap(nums[j], nums[j + 1]);
                didswap = 1;
             }
            }
        if (didswap == 0) break;
        }

       
        while(k>=1){
            if(nums[k]!=nums[k-1]){
                count = count + 1;
            }
            if(count == 3){
                return nums[k-1];
                break;
            }
            k--;
        }
        return nums[n-1];
         
    }
};