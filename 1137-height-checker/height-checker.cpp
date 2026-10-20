class Solution {
public:
    int heightChecker(vector<int>& heights) {

        int n = heights.size();
        int expected[n];
        int count=0;

        for(int i=0;i<n;i++){
            expected[i] = heights[i];
        }

        for(int i=n-1;i>=1;i--){
            int didswap = 0;
            for(int j=0;j<=i-1;j++){
                if(expected[j]>expected[j+1]){
                    int temp = expected[j+1];
                    expected[j+1] = expected[j];
                    expected[j] = temp;
                }
            }
            if(didswap=0) break;
        }

        for(int k=0;k<n;k++){
            if(expected[k]!= heights[k]){
                count = count + 1;
            }
        }

        return count;



        
    }
};