// week01-1.cpp
// LeetCode 28. Find the Index of the First Occurrence in a String
// �b haystack ���_��� �̭���� needle �w (�j�����w)
// haystack: sadbutsad
// needle:   sad i=0
//            sad i=1
class Solution {
public:
    int strStr(string haystack, string needle) {
        int H = haystack.length(), N = needle.length(); // �r�����
        for(int i=0 ; i <= H-N ; i++){ // 9 - 3 = 6
            // substr(�}�l, ����) �������r��
            if(haystack.substr(i,N) == needle) return i;
        }

        return -1;
    }
};
