// week08-2.cpp
// LeetCode 73. Set Matrix Zeroes �ǲ߭p�e Matrix�x�}��4�D
// �n�p�ߡA����@��Ū�A�@��]��0�A�n�ⶥ�q�A��Ū���A�A�]0
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        // ��1���q�A��Ū���A�O�U�������s������ i �M j
        int M = matrix.size(), N = matrix[0].size(); // ����M�A����N
        vector<int> markI(M, 0), markJ(N, 0); // �ŧiC++���}�C�A���פ��OM N�A�̭����]��0
        for(int i=0;i < M;i++){
            for(int j=0;j < N;j++){
                if(matrix[i][j] == 0){ // �n�O�U������ i,j
                    markI[i] = 1; // �аO�@�U i ���o�����A���@�U���n�M��0
                    markJ[j] = 1; // �аO�@�U j ���o�����A���@�U���n�M��0
                }
            }
        }
        // ��2���q�A�A�ӵ� markI �M markJ ���аO�A�������M��0
        for(int i=0; i<M ; i++){
            for(int j=0; j<N ; j++){
                if(markI[i] == 1 || markJ[j] == 1) matrix[i][j] = 0;
            } // �p�G���аO�A�A�⥦���������ܦ�0
        }
    }
};
