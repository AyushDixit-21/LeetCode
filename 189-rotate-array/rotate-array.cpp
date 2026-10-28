class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int n = nums.size();
        if(k>n){
            k = k%n;
        }
        vector<int> arr(n);
        vector<int> temp(k);
        
        for(int i = 0;i<k;i++){
            temp[i] = nums[n-k+i];
        }
        for(int b = 0;b<n;b++){
            arr[b] = nums[b];
        }

        for(int j=k;j<n;j++){
            nums[j] = arr[j-k];
        }
        for(int a = 0;a<k;a++){
            nums[a] = temp[a];
        }

    }
};