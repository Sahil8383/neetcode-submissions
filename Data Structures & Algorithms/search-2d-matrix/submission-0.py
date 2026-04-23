class Solution:

    def bs(self,nums: List[int],t:int) -> bool:
        l = 0
        r = len(nums) - 1

        while l<=r:
            m = l + (r-l)//2
            if nums[m] == t:
                return True
            elif nums[m] > t:
                r = m-1
            else:
                l = m + 1
        
        return 0


    def searchMatrix(self, matrix: List[List[int]], t: int) -> bool:
        
        for i in matrix:
            if self.bs(i,t):
                return True
        
        return False