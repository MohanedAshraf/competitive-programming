class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* tail = head;
        ListNode* prev = head;
        int sz = 1;
        while (tail != NULL && tail->next != NULL){
            tail = tail->next;
            sz++;
        }
        k = k%sz;
        while(k--){
            if(head != NULL){
            while(prev !=NULL && prev->next != NULL && prev->next->next != NULL){
                prev =  prev->next;
            }
            prev->next = NULL; 
            tail->next = head;
            head = tail;
            tail = prev;
            prev = head;
                
            }
            
        }

       return head;

    }
};
