class Node{
    public:
        int val;
        Node* next;
    Node(int x):val(x),next(NULL){};
};

class MyLinkedList {
public:
    Node* head;
    Node* tail;
    int sz;
    MyLinkedList() {
        head = NULL;
        tail = NULL;
        sz = 0;
    }
    
    int get(int index) {
        if(index >= sz || index < 0){return -1;}
        Node* it = head; 
        while(index--){
            it = it->next;
        }
        return it->val;
    }
    
    void addAtHead(int val) {
        Node* node = new Node(val);
        node->next = head;
        head = node;
        if(sz == 0) tail = head;
        ++sz;
    }
    
    void addAtTail(int val) {
        Node* node = new Node(val);
        if(sz==0) {
            tail = node;
            head = node;
        }
        tail->next = node;
        tail = node;
        ++sz;
    }
    
    void addAtIndex(int index, int val) {
        if(index > sz || index < 0){return;}
        if(index == 0 ){
            addAtHead(val);
            return;
        }
        if(index == sz){
            addAtTail(val);
            return;
        }
        Node* node = new Node(val);
        Node* it = head;
        --index;

        while(index--){
           it = it->next;
        }
      
        node->next = it->next;
        it->next = node;
        ++sz;
    }
    
    void deleteAtIndex(int index) {

        if(index > sz -1 || index < 0) return;
        if(index == 0 ){
        
            head = head->next;
            sz--;
            return;
        }

        int i = index ;

        Node* it = head;
        --i;
        while(i--){
            it = it->next;
        }
        if(index == sz -1 ) tail = it;
        it->next = it->next->next;
         --sz;

    }
};
