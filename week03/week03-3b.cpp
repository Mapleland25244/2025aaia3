// week03-3b.cpp �G�X�@����2�ؤ�k �������N�n�F
// LeetCode �ǲ߭p�e 283. Move Zeroes
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size = nums.size();
        int k = 0; // �������� nums[k] == nums[i]�A�Ak++
        for(int i=0;i<size;i++){
            if(nums[i] != 0) nums[k++] = nums[i];
        }
        for(int i=k;i<size;i++){
            nums[i] = 0;
        }
    }
};
