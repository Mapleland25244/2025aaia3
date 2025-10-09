// week05-1.cpp
// LeetCode 學習計畫 Built-In Functions 58. Length of Last Word
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s); // 把字串，變成之前交的 cin iostream
        string word; // 字串的word
        // ss >> word; // 很像之前教的 cin >> word
        while(ss >> word){ // 一直讀進來
            // 裡面什麼都不做
        }
        return word.length();
    }

};
