#include<iostream>
using namespace std;
class Listnode {
    public:
        int data;
        Listnode* next;
        Listnode(int x) {
            data= x;
            next= NULL;
        }
};
bool search(Listnode* head, int val) {
    Listnode* temp= head;
    while(temp!=NULL) {
        if(temp->data==val) {
            return true;
        }
        temp= temp->next;
    }
    return false;
}
void insertAtFirst(Listnode* &head, int val) {
    Listnode* temp= new Listnode(val);
    temp->next= head;
    head= temp;
}
void insertAtLast(Listnode* head, int val) {
    if(head==NULL) {
        head= new Listnode(val);
        return;
    }
    Listnode* temp= head;
    while(temp->next!=NULL) {
        temp= temp->next;
    }
    temp->next= new Listnode(val);
}
void removeElement(Listnode* &head, int val) {
    Listnode* temp= head;
    if(temp->data == val) {
        head= temp->next;
    }
    while (temp->next!= NULL) {
        if(temp->next->data == val) {
            temp->next= temp->next->next;
            return;
        }
        temp= temp->next;
    }
}
int Length(Listnode* head) {
    Listnode* temp= head;
    int len=0;
    while(temp != NULL) {
        len++;
        temp= temp->next;
    }
    return len;
}
void removeElementFromLast(Listnode* &head, int index) {
    int n= Length(head);
    index= n - index;
    if(index >= n) {
        cout<< "Wrong Index. So, didnt removed\n";
        return;
    } else if(index == 0) {
        head= head->next;
        return;
    }
    Listnode* temp= head;
    while(--index > 0 && temp!=NULL) {
        temp= temp->next;
    }
    if(temp->next!=NULL) {
        temp->next= temp->next->next;
    }
}
void reverseList(Listnode* head) {
    
}
int main() {

    Listnode* head= new Listnode(3);
    head->next= new Listnode(2);
    head->next->next= new Listnode(5);

    insertAtLast(head, 7);
    insertAtFirst(head, 10);
    insertAtFirst(head, 10);
    // 10 10 3 2 5 7

    cout<< search(head, 7)<< endl;

    cout<< Length(head)<< endl;

    removeElement(head, 10);
    // 10 3 2 5 7

    removeElementFromLast(head, 1);
    // 10 3 2 7

    Listnode* temp= head;
    while(temp!=NULL) {
        cout<< temp->data<<" ";
        temp= temp->next;
    }

    return 0;
}