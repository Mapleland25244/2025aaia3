// week04-2.cpp
// LeetCode 學習計畫 896. Monotonic Array
// 陣列很單調只有增加或減少，不可又增又減
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int up = 0, down = 0; // up有增加 down有減少
        int size = nums.size();
        for(int i=1 ; i<size ; i++){ // 倆倆比較
            if(nums[i-1] < nums[i]) up = 1; // 增加
            if(nums[i-1] > nums[i]) down = 1; // 減少
        }
        if(up == 1 && down == 1) return false; // 不可以「又增又減」
        return true; // 沒有失敗，就成功

    }
};
