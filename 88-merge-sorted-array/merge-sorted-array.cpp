class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int low1 = 0,low2 = 0;
        vector<int> temp;

        while(low1<m && low2<n){

            if(nums1[low1]<=nums2[low2]){
                temp.push_back(nums1[low1]);
                low1++;
            }
            else{
                temp.push_back(nums2[low2]);
                low2++;
            }
        }
        while(low1<m){
            temp.push_back(nums1[low1]);
            low1++;
        }
        while(low2<n){
            temp.push_back(nums2[low2]);
            low2++;;
        }
        for(int i=0;i<m+n;i++){
            nums1[i] = temp[i];
        }





    }
};