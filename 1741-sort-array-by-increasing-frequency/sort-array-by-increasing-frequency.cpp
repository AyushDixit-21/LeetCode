class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        int n = nums.size();
        int freq[201] = {0};

        for (int i = 0; i < n; i++) {
            freq[nums[i] + 100]++;
        }

        for (int k = n - 1; k >= 1; k--) {
            for (int j = 0; j < k; j++) {
                int left = nums[j];
                int right = nums[j + 1];

                if (freq[left + 100] > freq[right + 100] ||
                    (freq[left + 100] == freq[right + 100] && left < right)) {
                    swap(nums[j], nums[j + 1]);
                }
            }
        }

        return nums;
    }
};