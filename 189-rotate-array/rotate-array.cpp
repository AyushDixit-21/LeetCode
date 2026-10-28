class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int n = nums.size();
        if(k>n){
            k = k%n;
        }
        
        vector<int> temp(k);
        
        for(int i = 0;i<k;i++){
            temp[i] = nums[n-k+i];
        }

        for(int j=n-1;j>=k;j--){
            nums[j] = nums[j-k];
        }
        for(int a = 0;a<k;a++){
            nums[a] = temp[a];
        }

    }
};