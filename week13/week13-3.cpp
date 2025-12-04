// week13-3.cpp 學習計畫 Linked List 第3題
// LeetCode 2. Add Two Numbers 直式加法、逐位相加
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *ans = new ListNode(999); // dummy node 方便把答案印出來
        ListNode *tail = ans; // 方便把尾巴接起來
        int carry = 0; // 加法的進位
        while(l1 != nullptr || l2 != nullptr){
            int now = carry; // 有沒有進位阿!
            if(l1 != nullptr){ // 如果還有值
                now += l1->val; // 加值加進去
                l1 = l1->next; // 換下一筆
            }
            if(l2 != nullptr){ // 如果還有值
                now += l2->val; // 加值加進去
                l2 = l2->next; // 換下一筆
            }
            tail->next = new ListNode( now%10 ); // 個位數，準備一個node
            tail = tail->next; // 換下一筆
            carry = now / 10; // 進位的部分
        }
        if(carry>0) tail->next = new ListNode(carry); // 還有進位? 加1位!!
        return ans->next;
    }
};
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
