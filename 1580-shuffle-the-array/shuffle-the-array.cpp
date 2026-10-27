class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> arr1(2*n);
        int i = 0;
        int j = n;
        int k=0;

        while(k<(2*n)){
            if(i<n){
                arr1[k] = nums[i];
                i++;
            }
            if(j<(2*n)){
                arr1[k+1] = nums[j];
                j++;

            }
            k = k+2;

        }
        return arr1;
    }
};