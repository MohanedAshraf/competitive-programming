class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = NULL;
        int sz1 = 0 , sz2=0;
        ListNode* it = NULL;
        ListNode* it1 = l1;
        ListNode* it2 = l2;

        bool remain = 0;
        while(it1 != NULL || it2 != NULL){
            if(it1 == NULL){
                int  x =  0 + it2->val;
                if(remain) x++;

                if(x>=10)
                 remain = 1;
                else 
                remain =  0;
                
                ListNode* node = new ListNode(x % 10);
                if(head == NULL){
                    head = node;
                    it  = node;
                }
                     else{

                    it->next = node;
                    it = node; 
                }
                it2 = it2->next;
            }
            else if(it2 == NULL){
                int  x =  0 + it1->val;
                if(remain) x++;

                if(x>=10)
                 remain = 1;
                else
                 remain = 0;
                
                ListNode* node = new ListNode(x % 10);
                if(head == NULL){
                    head = node;
                    it = node;
                }
                  else{

                    it->next = node;
                    it = node; 
                }
                it1 = it1->next;
            }
            else{
                int  x =  it1->val + it2->val;
                if(remain) x++;
                if(x>=10)
                 remain = 1;
                else
                remain = 0;
                
                ListNode* node = new ListNode(x % 10);
                if(head == NULL){
                    head = node;
                    it = node;
                }
                else{

                    it->next = node;
                    it = node; 
                }
             it1 = it1->next;
            it2 = it2->next;
            }

        }
    if(remain){
         ListNode* node = new ListNode(1 % 10);
         it->next = node;
         it = node; 
    }

    return head;
    }
};