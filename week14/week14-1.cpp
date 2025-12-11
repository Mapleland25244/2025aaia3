// week14-1.cpp 學習計畫 Linked List 第2題
// LeetCode 206. Reverse Linked List
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        vector<int> a;// 使用vector陣列，把值存起來
        while (head != nullptr){
            a.push_back(head->val);
            head = head -> next;
        }

        ListNode* ans = new ListNode(999); // dummy node
        ListNode* ans2 = ans; // 負責把ans的尾巴「收尾」
        // 倒過來迴圈，再把它放到ans的尾巴
        for(int i=a.size()-1;i>=0;i--){
            ans2->next = new ListNode(a[i]); // 下一筆
            ans2 = ans2->next; // 到下一筆，繼續「收尾」
        }
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
