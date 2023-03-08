#include<iostream>
class MyLinkedList {
public:
    MyLinkedList() {
        struct Node {
            int val;
            Node* next;
            Node(int val):val(val),next(NULL){}
        };
        MyLinkedList() {
            dummyHead = new Node(0);
            size = 0;
        }
        private:
        Node* dummyHead;
        int size;
    }
    
    int get(int index) {
        //validation checking
        if(index < 0 || index > size-1) 
        {return -1;}
        Node* cur = dummyHead;
        for(int i=-1; i<index; i++) {
            cur = cur->next;
        }
        return cur->val;
    }
    
    void addAtHead(int val) {
        Node* newNode = new Node(val);
        newNode->next = dummyHead->next;
        dummyHead->next = newNode;
        size++; 
    }
    
    void addAtTail(int val) {
        Node* newNode = new Node(val);
        Node* cur = new Node();
        for(int i = 0; i < size; i++) {
            cur = cur->next;
        }
        cur->next = newNode;
        size++;
    }
    
    void addAtIndex(int index, int val) {
        if(index > size) {return}
        Node* newNode= new Node(val);
        Node* cur = new Node(0);
        for(int i = 0; i < index; i++) {
            cur = cur->next;
        }
        newNode->next = cur->next;
        cur->next = newNode;
        size++;
    }
    
    void deleteAtIndex(int index) {

    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */