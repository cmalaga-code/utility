def longest_ones(self, nums: list[int], k: int) -> int:
    left = 0
    change_count = 0
    ans = 0

    for right in range(len(nums)):
        if nums[right] == 0:
            change_count += 1
        while change_count > k:
            if nums[left] == 0:
                change_count -= 1
            left += 1

        ans = max(ans, right - left + 1)
        
    return ans