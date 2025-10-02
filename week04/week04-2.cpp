// week04-2.cpp
// LeetCode �ǲ߭p�e 896. Monotonic Array
// �}�C�ܳ�եu���W�[�δ�֡A���i�S�W�S��
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int up = 0, down = 0; // up���W�[ down�����
        int size = nums.size();
        for(int i=1 ; i<size ; i++){ // �ǭǤ��
            if(nums[i-1] < nums[i]) up = 1; // �W�[
            if(nums[i-1] > nums[i]) down = 1; // ���
        }
        if(up == 1 && down == 1) return false; // ���i�H�u�S�W�S��v
        return true; // �S�����ѡA�N���\

    }
};
