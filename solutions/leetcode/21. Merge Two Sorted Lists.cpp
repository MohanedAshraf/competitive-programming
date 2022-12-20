class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head = nullptr; 
        ListNode* it = nullptr; 

        while(list1 != nullptr || list2 != nullptr){
        
            if(list1 != nullptr && list2 != nullptr && list1->val < list2->val){
                ListNode* node = new ListNode(list1->val);
      
                if(it == nullptr){
                    it = node;
                    head = it;
                    list1 = list1->next;
                    continue;
                }
                it->next = node;          
                it = node;
                list1 = list1->next;
                
            }
            if(list2 != nullptr && list1 != nullptr && list1->val >= list2->val){
               ListNode* node = new ListNode(list2->val);
                if(it == nullptr){
                      
                    it = node;
                    head = it;
                    list2 = list2->next;
                    continue;
                }
               
                it->next = node;
                it = node;
                list2 = list2->next;
            }
            else if(list2 == nullptr){
                     ListNode* node = new ListNode(list1->val);
                                  if(it == nullptr){
                      
                    it = node;
                    head = it;
                    list1 = list1->next;
                    continue;
                }
                     it->next = node;
                     it = node ;
                     list1 = list1->next;
            }           
            else if(list1 == nullptr){
                ListNode* node = new ListNode(list2->val);
                     if(it == nullptr){
                      
                    it = node;
                    head = it;
                    list2 = list2->next;
                    continue;
                }
                      it->next = node;
                     it = node ;
                     list2 = list2->next;
            }
        }

        return head;
    }
};