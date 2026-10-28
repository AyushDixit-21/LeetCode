class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        vector<int> temp;
        for(int i =0;i<n;i++){
            if(nums[i]!=val){
            temp.push_back(nums[i]);
            }
        }
        int j = 0;
        for(int i = 1;i<n;i++){
            if(nums[i]!=val && nums[j]==val){
                swap(nums[i],nums[j]);
                j++;
            }
            if(nums[j]!=val){
                j++;
            }
        }
        return temp.size();
        
    }
};