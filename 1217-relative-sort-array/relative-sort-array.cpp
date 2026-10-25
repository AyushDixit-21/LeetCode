class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {

        int freq[1001] = {0};
        vector<int> ans;

        // Step 1: Count frequency of each element in arr1
        for (int i = 0; i < arr1.size(); i++) {
            freq[arr1[i]]++;
        }

        // Step 2: Add elements in the order specified by arr2
        for (int i = 0; i < arr2.size(); i++) {
            int num = arr2[i];

            while (freq[num] > 0) {
                ans.push_back(num);
                freq[num]--;
            }
        }

        // Step 3: Add remaining elements in ascending order
        for (int i = 0; i <= 1000; i++) {
            while (freq[i] > 0) {
                ans.push_back(i);
                freq[i]--;
            }
        }

        return ans;
    }
};