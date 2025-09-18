// week02-5.cpp
// LeetCode 389. Find the Difference
class Solution {
public:
    char findTheDifference(string s, string t) {
        // �����B�έp�@�U 26 �Ӧr���A�X�{�X��
        int A[256] = {}; // �}�C�ŧi�A�}�C�Τj�A�����w�]��0
        for(int i=0;i<s.length(); i++){
            char c = s[i]; // ���� i �Ӧr��
            A[c]++; // �����B��i�B�������r����l��
        }
        for(int i=0; i<t.length();i++){
            char c = t[i]; // ���� i �Ӧr��
            A[c]--; // �q��l�̡A���X�r��
            if(A[c] < 0) return c; // �r�������ΡA�N�O��!!!�ʥL!!!
        }
        return 0;
    }
};
