#include<iostream>
using namespace std;
class ListNode {
public:
    int data;
    ListNode* prev= NULL;
    ListNode* next= NULL;
    ListNode(int val, ListNode* n=NULL, ListNode* p=NULL) {
        data= val;
        next= n;
        prev= p;
    }
};
void display_head(ListNode* head) {
    while(head!= NULL) {
        cout<< head->data<<" ";
        head= head-> next;
    }
    cout<< endl;
}
void display_tail(ListNode* tail) {
    while(tail!= NULL) {
        cout<< tail->data<<" ";
        tail= tail-> prev;
    }
    cout<< endl;
}
void insertAtStart(ListNode* &head, int val) {
    ListNode* node= new ListNode(val, head, NULL);
    head->prev= node;
    head= head->prev;
}
void insertAtMid(ListNode* head, int pos, int val) {
    
}
void insertAtEnd(ListNode* &tail, int val) {
    ListNode* node= new ListNode(val, NULL, tail);
    tail->next= node;
    tail= tail-> next;
}
int main() {
    ListNode* head= new ListNode(0, NULL, NULL);
    ListNode* tail= new ListNode(2,NULL, head);
    head-> next= tail;

    // cout<< "Inserting at End\n";
    // int n;
    // cin>> n;
    // while(n--) {
        //insertAtMid(head, 8); 
    // }
    
    insertAtStart(head, 5);
    insertAtEnd(tail, 9);
    // insertAtMid(head, 2, 10);

    display_head(head);
    // display_tail(tail);
    return 0;
}