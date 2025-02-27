#include <iostream>
using namespace std;
class TreeNode {
    public:
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int d){
        data = d;
        left = right = nullptr;
    }
};

void inOrderTraversal(TreeNode* root){ // LDR
    if(root != nullptr){
        inOrderTraversal(root->left);
        cout << root->data << " ";
        inOrderTraversal(root->right);
    }
}
TreeNode* mirrorTree(TreeNode* root){
    if(root == nullptr){
        return root;
    }
    // This will only swap the left and right subtrees 
    TreeNode* temp = root->left;
    root->left = root->right;
    root->right = temp;
    // This will recursively swap the entire tree
    if(root->left){
        mirrorTree(root->left);
    } 
    if(root->right){
        mirrorTree(root->right);
    }
    return root;
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

    cout << "InOrder Traversal of Original Tree: ";
    inOrderTraversal(root);
    cout << endl;
    mirrorTree(root);
    cout << "InOrder Traversal of the Mirror Tree: ";
    inOrderTraversal(root);
    cout << endl;
    return 0;
}