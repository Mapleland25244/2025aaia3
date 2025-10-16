// week06-4.cpp
// LeetCode 學習計畫 Simulation 657. Robot Return to Origin
class Solution {
public:
    bool judgeCircle(string moves) {
        int x=0,y=0; // 開始在原點 O Origin
        for(char m : moves){ // for-each 迴圈
            if(m == 'R'){ // 右
                x++;
            }else if(m == 'L'){ // 左
                x--;
            }else if(m == 'U'){ // 上
                y++;
            }else if(m == 'D'){ // 下
                y--;
            }
        } // 最後還有留在 原點(0,0) 嗎?
        if(x == 0 && y == 0) return true;
        return false;
    }
};
