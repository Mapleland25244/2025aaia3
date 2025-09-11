# week01-2b.py 使用pyton版本2 使用find()函式
# LeetCode 28. Find the Index of the First Occurrence in a String
# 在 haystack 乾稻草堆 裡面找到 needle 針 (大海撈針)
# haystack: sadbutsad
# needle:   sad i=0
#            sad i=1

class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        return haystack.find(needle)

