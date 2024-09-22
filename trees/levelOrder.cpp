#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
    int data;
    TreeNode* Left;
    TreeNode* Right;
    TreeNode(int d=0, TreeNode* L= nullptr, TreeNode* R= nullptr): data(d), Left(L), Right(R) {}
};

vector<int> levelOrderTraversal(TreeNode* root) {
    vector<int> ans;
    queue<TreeNode*> q;
    if(root == NULL) return ans;
    q.push(root);
    while(!q.empty()) {
        int size= q.size();
        for(int i=0; i<size; i++) {
            TreeNode* temp= q.front();
            q.pop();
            
            if(temp->Left != nullptr)
                q.push(temp->Left);
            if(temp->Right != nullptr)
                q.push(temp->Right);

            ans.push_back(temp->data);
        }
    }
    return ans;
}

int main() {
    TreeNode* root= new TreeNode(1);

    root->Left= new TreeNode(2);
    root->Right= new TreeNode(3);

    root->Left->Left= new TreeNode(4);
    root->Left->Right= new TreeNode(5);

    root->Right->Left= new TreeNode(6);
    root->Right->Right= new TreeNode(7);


    vector<int> answer= levelOrderTraversal(root);
    for(auto i: answer) {
        cout<< i << " ";
    }

    /*    1
    //   / \
    //  2   3
    // /\   /\
    //4  5 6  7
    */

    return 0;
}