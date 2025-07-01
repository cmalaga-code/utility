const longestOnes = function(nums, k) {
    let left = 0;
    let curr = 0;
    let ans = 0;
    let n = nums.length;
    for (let right = 0; right < n; right++) {
        if (nums[right] == 0) {
            curr++;
        }
        while (curr > k) {
            if (nums[left] == 0) {
                curr--;
            }
            left++;
        }
        let window = right - left + 1;
        if (ans < window) {
            ans = window;
        }
    }
    return ans;
};