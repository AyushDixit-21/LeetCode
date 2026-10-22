class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        
        int n = heights.size();
        
        for(int i=0;i<=n-1;i++){
            int max = i;
            for(int j=i;j<=n-1;j++){
                if(heights[max]<heights[j]){
                    max = j;
                }
            }
            swap(heights[max],heights[i]);
            swap(names[max],names[i]);
        }

        return names;
    }
};