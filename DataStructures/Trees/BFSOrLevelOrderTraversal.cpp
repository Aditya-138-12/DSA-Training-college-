#include <iostream>
#include <queue>
using namespace std;
class TreeNode{
    public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x): val(x), left(nullptr), right(nullptr){}
};
void levelOrderTraversal(TreeNode* root){
    if(root == nullptr){
        return;
    }
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()){
        TreeNode* node = q.front();
        q.pop();
        cout << node->val << " ";
        // Push the left subtree into the queue
        if(node->left != nullptr){
            q.push(node->left);        
        }
        // Push the right subtree into the queue
        if(node->right != nullptr){
            q.push(node->right);
        } 
    }
}
int main(){
    // Constructing the tree: Top to Bottom & Left To Right
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    cout << "BFS or Level Order Traversal: ";
    levelOrderTraversal(root);
    return 0;
}