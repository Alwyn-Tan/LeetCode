class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL) {return head;}
        ListNode* cur = head;
        ListNode* pre = NULL;
        ListNode* nex;
        while(cur) { 
            nex = cur->next;
            cur->next = pre;
            pre = cur;
            cur = nex;
        }
        return pre;
    }
};