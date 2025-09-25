// week03-4.cpp
// LeetCode �D���D 120. Triangle

class Solution { // �ϥΡu�ʺA�W���v�C�C��s�}�C�N�n
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        // triangle [i][j]
        int N = triangle.size(); // �`�@���X�h
        // �q�U���W�d�A�̤U������ N-1 �h�A�S���D�A�N�O�������̤p�� �A�ҥHN-2���W��s
        for(int i=N-2;i>=0;i--){ // �˹L�Ӫ��j��A�qN-2���W
            for(int j=0; j<=i;j++){ // �q����k�A��i�h�� 0..i�ӼƳ��n��s
                triangle[i][j] += min(triangle[i+1][j], triangle[i+1][j+1]);
                // �C�ӤH�A�n�ݥ��U��2�ӿ��(���U��B�U�谾�k)�A��̤p�����@��
            }

        }
        return triangle[0][0];
    }
};
