class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head == NULL) return head;

        ListNode* it = head->next;
        ListNode* prev =  head;
        while(it != NULL){
            if(it->val == val){
                prev->next= it->next;
                it = it->next;
                continue;
            }
            it = it->next;
            prev = prev->next;
        }
        if(head->val == val) head = head->next;
        return head;   
    }
};
