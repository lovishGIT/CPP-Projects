#include<iostream>
using namespace std;
class Listnode {
    public:
        int data;
        Listnode* next;
        Listnode(int val) {
            data= val;
            next= NULL;
        }
};
void mergeSortedList(Listnode* L1, Listnode* L2) {
    Listnode* temp;
    while(L1->next != NULL && L2->next != NULL) {
        if(L1->data <= L2->data) {
            temp= new Listnode(L1->data);
            L1= L1->next;
        }
        
    }
}
int main() {
    int val;
    Listnode* l1= new Listnode(5);
    Listnode* l2= new Listnode(5);
    cout<< "Enter 0 to exit list";
    cout<< "list1: ";
    while (0==0) {
        cin>> val;
        if(val==0) break;
        l1= new Listnode(val);
        l1= l1->next;
    }
    cout<< "list2: ";
    while (0==0) {
        cin>> val;
        if(val==0) break;
        l2= new Listnode(val);
        l2= l2->next;
    }
    return 0;
}