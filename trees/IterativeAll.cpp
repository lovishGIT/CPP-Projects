#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int d): data(d), left(nullptr), right(nullptr) {}
};
void PreOrder(TreeNode* root) {
    stack<TreeNode*> st;
    TreeNode* temp= root;
    while(st.size()>0 || temp != nullptr) {
        cout<< temp->data <<" ";
        if(temp->right != nullptr) {
            st.push(temp->right);
        }
        if(temp->left != nullptr) {
            temp= temp->left;
        } else {
            if(st.size()==0) {
                temp= nullptr;
                continue;
            }
            temp= st.top();
            st.pop();
        }
    }
    cout<< endl;
}
void InOrder(TreeNode* root) {
    stack<TreeNode*> st;
    TreeNode* curr= root;
    while(st.size()>0 || curr!=nullptr) {
        while(curr!=nullptr) {
            st.push(curr);
            curr= curr->left;
        }
        curr= st.top();
        st.pop();
        cout<< curr->data << " ";
        curr= curr->right;
    }
    cout<< endl;
}
void PostOrder2Stack(TreeNode* root) {
    stack<TreeNode*> s1;
    stack<int> s2;
    s1.push(root);
    while(s1.size()>0) {
        TreeNode* temp= s1.top();
        s2.push(temp->data);
        s1.pop();
        if(temp->left != nullptr) {
            s1.push(temp->left);
        }
        if(temp->right != nullptr) {
            s1.push(temp->right);
        }
    }
    while(s2.size()>0) {
        cout<< s2.top()<< " ";
        s2.pop();
    } 
    cout<<endl;
}
void PostOrder1Stack(TreeNode* root) {
    vector<int> ans;
    stack<TreeNode*> st;
    TreeNode* temp= root;
    while(!st.empty() || temp != nullptr) {
        if(temp != nullptr) {
            st.push(temp);
            temp= temp->left;
        }
        else {
            TreeNode* curr= st.top()->right;
            if(curr==nullptr) {
                curr= st.top();
                st.pop();
                cout<< curr->data<<" ";
                while(!st.empty() && st.top()->right==curr) {
                    curr= st.top();
                    st.pop();
                    cout<< curr->data<<" ";   
                }
            } 
            else{
                temp= curr;
            }
        }
    }
    cout<< endl;
}
void levelOrder(TreeNode* root) {
    queue<TreeNode*> que;
    que.push(root);
    while(!que.empty()) {
        TreeNode* temp= que.front();
        que.pop();
        cout<< temp->data<<" ";
        if(temp->left != nullptr)
            que.push(temp->left);
        if(temp->right != nullptr)
            que.push(temp->right);
    }
}
void AllTraversals(TreeNode* root) {
    vector<int> PreOrder;
    vector<int> InOrder;
    vector<int> PostOrder;
    stack<pair<TreeNode*, int>> st;
    st.push({root,0});
    while(!st.empty() && st.top().first!=nullptr) {
        if(st.top().second == 0) {
            PreOrder.push_back(st.top().first->data);
            st.top().second++;
            if(st.top().first->left != nullptr) {
                st.push({st.top().first->left, 0});
            }
        } 
        else if(st.top().second == 1) {
            InOrder.push_back(st.top().first->data);
            st.top().second++;
            if(st.top().first->right != nullptr) {
                st.push({st.top().first->right, 0});
            }
        } 
        else {
            PostOrder.push_back(st.top().first->data);
            st.pop();
        }
    }
    cout<< "Pre Order: ";
    for(auto i:PreOrder) {
        cout<< i<<" ";
    }cout<<endl;

    cout<< "In Order: ";
    for(auto i:InOrder) {
        cout<< i<<" ";
    }cout<<endl;

    cout<< "Post Order: ";
    for(auto i:PostOrder) {
        cout<< i<<" ";
    }cout<<endl;
}
int main() {
    TreeNode* root= new TreeNode(1);
    root->left= new TreeNode(2);
    root->right= new TreeNode(5);

    root->left->left= new TreeNode(3);
    root->left->right= new TreeNode(4);

    root->right->left= new TreeNode(6);
    root->right->right= new TreeNode(7);
    // root->right->left->right= new TreeNode(8);
    // root->right->left->right->right= new TreeNode(9);

    // PreOrder(root);
    // InOrder(root);
    // PostOrder2Stack(root);
    // PostOrder1Stack(root);
    // levelOrder(root);

    AllTraversals(root);

    return 0;
}
//    1
//  2   3
// 4 5 6 7