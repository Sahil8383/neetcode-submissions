class Solution:
    def minWindow(self, s: str, t: str) -> str:
        ct,win = {},{}
        if t == "":
            return ""

        for c in t:
            ct[c] = ct.get(c,0) + 1

        have,need = 0, len(ct)
        res,resLen = [-1,-1],float("infinity")
        l = 0

        for r in range(len(s)):
            c = s[r]
            win[c] = 1 + win.get(c,0)

            if c in ct and win[c] == ct[c]:
                have+=1

            while have == need:
                if (r-l + 1) < resLen:
                    res = [l,r]
                    resLen = r - l + 1

                win[s[l]] -=1
                if s[l] in ct and win[s[l]] < ct[s[l]]:
                    have-=1
                l+=1

        l,r = res

        return s[l:r+1] if resLen !=float("infinity") else ""            
            
