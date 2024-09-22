#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

TreeNode* buildTree(vector<int>& nodes) {
    if (nodes.empty() || nodes[0]<0) {
        return nullptr;
    }

    TreeNode* root = new TreeNode(nodes[0]);
    queue<TreeNode*> q;
    q.push(root);

    size_t i = 1;
    while (i < nodes.size()) {
        TreeNode* current = q.front();
        q.pop();

        // Process left child
        if (nodes[i] >=0) {
            current->left = new TreeNode(nodes[i]);
            q.push(current->left);
        }
        i++;

        // Ensure we have not run out of nodes
        if (i >= nodes.size()) break;

        // Process right child
        if (nodes[i] >=0) {
            current->right = new TreeNode(nodes[i]);
            q.push(current->right);
        }
        i++;
    }

    return root;
}
void InOrder(TreeNode* root) {
    if(root == nullptr) return;
    InOrder(root->left);
    cout<< root->val<< " ";
    InOrder(root->right);
}
int main() {
    vector<int> nodes = {10, 5, 15, 3, -1, 12, 17};

    TreeNode* root = buildTree(nodes);

    InOrder(root); cout<<endl;

    return 0;
}
