# week01-2b.py �ϥ�pyton����2 �ϥ�find()�禡
# LeetCode 28. Find the Index of the First Occurrence in a String
# �b haystack ���_��� �̭���� needle �w (�j�����w)
# haystack: sadbutsad
# needle:   sad i=0
#            sad i=1

class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        return haystack.find(needle)

