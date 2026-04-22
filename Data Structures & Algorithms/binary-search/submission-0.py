class Solution:
    def search(self, nums: List[int], t: int) -> int:
        low,high = 0,len(nums)-1

        while low <= high:
            mid = low + (high - low) // 2
            el = nums[mid]
            if el == t:
                return mid
            elif el < t:
                low = mid + 1
            else:
                high = mid - 1
            
        return -1
