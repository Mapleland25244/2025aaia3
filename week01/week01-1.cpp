// week01-1.cpp
// LeetCode 28. Find the Index of the First Occurrence in a String
// 在 haystack 乾稻草堆 裡面找到 needle 針 (大海撈針)
// haystack: sadbutsad
// needle:   sad i=0
//            sad i=1
class Solution {
public:
    int strStr(string haystack, string needle) {
        int H = haystack.length(), N = needle.length(); // 字串長度
        for(int i=0 ; i <= H-N ; i++){ // 9 - 3 = 6
            // substr(開始, 長度) 部分的字串
            if(haystack.substr(i,N) == needle) return i;
        }

        return -1;
    }
};
