class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* tail= NULL ;
        ListNode* pre = head ;
        
        while(head){
            head = head->next;
            pre->next = tail;
            tail = pre;
            pre = head;
        }

        return tail;
    }
};
