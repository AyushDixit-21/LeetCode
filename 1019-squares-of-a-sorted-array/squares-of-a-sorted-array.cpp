class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        int n = nums.size();
        vector<int>sqarr(n);

        for(int i = 0;i<n;i++){
            sqarr[i]=nums[i]*nums[i];
        }
        for(int i=0;i<=n-1;i++){
            int j = i;
            while(j>0 && sqarr[j-1]>sqarr[j]){
                int temp = sqarr[j-1];
                sqarr[j-1] = sqarr[j];
                sqarr[j] = temp;
                j--;
            }
        }
        return sqarr;
        
            
    }
};