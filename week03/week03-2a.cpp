// week03-2a.cpp 二合一 要寫2次
// LeetCode 學習計畫 1822. Sign of the Product of an Array
// 把陣列乘起來，看是正數、負數，還是 0
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int ans =1; // 因為 0 乘任何數，都會變成0，只有1乘啥變啥
        for(int i=0;i<nums.size();i++){
            ans *= nums[i]; // 每次把 nums[i] 乘進 ans 裡
        } // 數字越乘越大，1000個數字，乘到一半，就爆炸了，所以錯了
        if(ans>0) return 1;
        if(ans<0) return -1;
        return 0;
    }
};
