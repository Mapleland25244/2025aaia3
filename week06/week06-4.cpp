// week06-4.cpp
// LeetCode �ǲ߭p�e Simulation 657. Robot Return to Origin
class Solution {
public:
    bool judgeCircle(string moves) {
        int x=0,y=0; // �}�l�b���I O Origin
        for(char m : moves){ // for-each �j��
            if(m == 'R'){ // �k
                x++;
            }else if(m == 'L'){ // ��
                x--;
            }else if(m == 'U'){ // �W
                y++;
            }else if(m == 'D'){ // �U
                y--;
            }
        } // �̫��٦��d�b ���I(0,0) ��?
        if(x == 0 && y == 0) return true;
        return false;
    }
};
