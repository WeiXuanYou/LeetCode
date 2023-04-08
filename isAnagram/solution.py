class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        s_dict = {}
        if(len(s) != len(t)): return False
        for i in s:
            s_dict[i] = s_dict.get(i,0) + 1

        for i in t:
            if(i in s_dict.keys()):
                s_dict[i] -= 1
        for val in s_dict.values():
            if(val != 0): return False
        return True
        
        
