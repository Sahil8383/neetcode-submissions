class Solution:
    def minEatingSpeed(self, p: List[int], h: int) -> int:
        l,r = 1, max(p)
        res = r

        while l<=r:
            m = (l + r) // 2
            hours = 0

            for i in p:
                hours+= math.ceil(float(i)/m)
            
            if hours <= h:
                res = m
                r =  m - 1
            else:
                l = m + 1
            
        return res

