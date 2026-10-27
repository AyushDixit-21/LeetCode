class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
        int evencount = 0;
     

        for(int i=0;i<n;i++){
            int count = 0;
            int x = nums[i];
            while(x>0){
                count = count+1;
                x = x/10;
                
            }
            if(count%2==0) evencount++;
            
        }
        return evencount;
        
    }
};