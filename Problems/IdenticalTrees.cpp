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
bool areIdentical(TreeNode* tree1, TreeNode* tree2){
    // Empty
    if(tree1 == nullptr && tree2 == nullptr){
        return true;
    }
    // Any one of them is null
    if(tree1 == nullptr || tree2 == nullptr){
        return false;
    }
    // Compare the root node data
    if(tree1->data != tree2->data){
        return false;
    }
    return (areIdentical(tree1->left, tree2->left) && 
           areIdentical(tree1->right, tree2->right)); 
}
int main(){
    // Constructing the tree: Top to Bottom & Left To Right
    TreeNode* tree1 = new TreeNode(1);
    tree1->left = new TreeNode(2);
    tree1->right = new TreeNode(3);

    TreeNode* tree2 = new TreeNode(1);
    tree2->left = new TreeNode(2);
    tree2->right = new TreeNode(3);

    if(areIdentical(tree1, tree2)){
        cout << "Tree1 & Tree2 are identical." << endl;
    }else{
        cout << "Tree1 & Tree2 are not identical." << endl;
    }

    TreeNode* tree3 = new TreeNode(1);
    tree3->left = new TreeNode(2);
    tree3->right = new TreeNode(3);

    TreeNode* tree4 = new TreeNode(4);
    tree4->left = new TreeNode(6);
    tree4->right = new TreeNode(7);

    if(areIdentical(tree3, tree4)){
        cout << "Tree3 & Tree4 are identical." << endl;
    }else{
        cout << "Tree3 & Tree4 are not identical." << endl;
    }
    
    return 0;
}