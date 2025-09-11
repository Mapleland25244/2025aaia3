# week01-2a.py
# LeetCode 28. Find the Index of the First Occurrence in a String
# �b haystack ���_��� �̭���� needle �w (�j�����w)
# haystack: sadbutsad
# needle:   sad i=0
#            sad i=1

class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        H = len(haystack)
        N = len(needle)
        for i in range(0,H-N+1):
            if(haystack[i:i+N] == needle):
                return i
        return -1

