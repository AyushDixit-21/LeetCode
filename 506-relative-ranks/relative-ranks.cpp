class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        
        
        int n = score.size();
        vector<string> Rank(n);

        for(int i=0;i<=n-1;i++){
            int pivot = score[i];
            int rank = 1;
            for(int j=0;j<=n-1;j++){
                if(score[j]>pivot){
                    rank++;
                }
            }
            if(rank==1){
                Rank[i] = "Gold Medal";
            }
            else if(rank==2){
                Rank[i] = "Silver Medal";
            }
            else if(rank==3){
                Rank[i] = "Bronze Medal";
            }
            else{
                Rank[i] = to_string(rank);
            }

        }

        return Rank;

    }
};