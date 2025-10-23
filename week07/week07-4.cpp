// week07-4.cpp
// LeetCode 1041. Robot Bounded In Circle
class Solution {
public:
    bool isRobotBounded(string instructions) {
        instructions = instructions + instructions + instructions + instructions;
        int x=0, y=0; // x�y��, y�y��
        int d = 0; // d:��V direction 0:�_ 1:�F 2:�n 3:��
        // �k�� d = (d+1)%4 ��4���l��
        // ���� d = (d-1+4)%4 = (d+3)%4 ���M�i�H�˹L�ӡA�ӯ��_�F!
        int dx[4] = {0, 1, 0, -1}; // �e�i1��ɡA�|�� x += dx[d] �� y += dy[d]
        int dy[4] = {1, 0, -1, 0}; // �o���A�O�u�a��2D��������ءv�A�M�w�e�i�h��
        for(char c : instructions){ // �̷Ӧr�������O�A�@����1�Ӱʧ@
            if(c == 'G'){ // �e�i�@��A�t�X dx[d] dy[d] �e�i
                x += dx[d];
                y += dy[d];
            }else if(c == 'R'){ // �k��
                d = (d+1)%4;
            }else if(c == 'L'){ // ����
                d = (d+3)%4;
            }
        } // ���}�j���....���M�|�@�������^�ӡA���ɭԷ|�^�ӡC
        if(x==0 && y==0) return true;
        else return false;
    }
};
