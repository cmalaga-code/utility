#include <vector>

using namespace std;

int longestOnes(vector<int>& nums, int k) {
    int left = 0;
    int changeCount = 0;
    int ans = 0;
    
    for (int right = 0; right < nums.size(); right++) {
        if (nums[right] == 0) {
            changeCount++;
        }
        while (changeCount > k) {
            if (nums[left] == 0) {
                changeCount -= 1;
            }
            left += 1;
        }
        int window = right - left + 1;
        
        if (ans < window) {
            ans = window;
        }
    }
    return ans;
}