class Solution {
public:

    int Partition(vector<int>& nums, int low, int high){
        int pivot = nums[low];
        int i = low;
        int j = high;

        while(i<j){
            while(nums[i]>=pivot && i<high){
                i++;
            }
            while(nums[j]<pivot && j>low){
                j--;
            }
            if(i<j) swap(nums[i],nums[j]);
        }
        swap(nums[low],nums[j]);
        return j;
    }

    void quicksort(vector<int>&nums, int low,int high,int k){
        if(low<high){
            int pindex = Partition(nums,low,high);
            if(k-1<pindex){
                quicksort(nums,low,pindex-1,k);
            }
            else{
                quicksort(nums,pindex+1,high,k);
            }
        }
            
    }

    int findKthLargest(vector<int>& nums, int k) {
        int low = 0;
        int high = nums.size()-1;
        quicksort(nums,low,high,k);

        return(nums[k-1]);

    }
};