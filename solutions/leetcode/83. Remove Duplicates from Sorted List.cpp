class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* it = head;
        while(it != NULL && it->next != NULL){
            if(it->val == it->next->val){
                it->next = it->next->next;
            }
            else
            it = it->next;
        }


        return head;
    }
};
