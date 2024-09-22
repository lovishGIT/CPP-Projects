#include<iostream>
using namespace std;
struct TreeNode
{
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int d): data(d), left(nullptr), right(nullptr) {}
};
void depthFirstTraversalPre(TreeNode* top) {
    if(top == nullptr || top == NULL) return;
    cout<< top->data;
    depthFirstTraversalPre(top->left);
    depthFirstTraversalPre(top->right);
}

void depthFirstTraversalPost(TreeNode* top) {
    if(top == nullptr || top == NULL) return;
    depthFirstTraversalPost(top->left);
    depthFirstTraversalPost(top->right);
    cout<< top->data;
}

void depthFirstTraversalInf(TreeNode* top) {
    if(top == nullptr || top == NULL) return;
    depthFirstTraversalInf(top->left);
    cout<< top->data;
    depthFirstTraversalInf(top->right);
}

int main() {
    TreeNode* t1= new TreeNode(0);

    t1->left= new TreeNode(1);
    t1->right= new TreeNode(2);

    t1->left->left= new TreeNode(3);
    t1->left->right= new TreeNode(4);
    t1->right->left= new TreeNode(5);
    t1->right->right= new TreeNode(6);

    depthFirstTraversalPre(t1); cout<< endl;
    depthFirstTraversalPost(t1); cout<< endl;
    depthFirstTraversalInf(t1); cout<< endl;
    return 0;
}

//    0
//  1   2
// 3 4 5 6