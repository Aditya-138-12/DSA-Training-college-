#include <iostream>
using namespace std;
class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val) : data(val), left(nullptr),right(nullptr){}
};
TreeNode* sortedArrayToBalancedBST(int arr[], int s, int e){
    if(s > e){
        return nullptr;
    }
    int mid = (s+e)/2;
    TreeNode* root = new TreeNode(arr[mid]);
    // Recursive call for the left side of the array to fill the
    // left subtree
    root->left = sortedArrayToBalancedBST(arr,s,mid-1);
    // Recursive call for the right side of the array to fill the
    // right subtree
    root->right = sortedArrayToBalancedBST(arr,mid+1,e);
    return root;
}
void inOrderTraversal(TreeNode* root){ // LDR
    if(root != nullptr){
        inOrderTraversal(root->left);
        cout << root->data << " ";
        inOrderTraversal(root->right);
    }
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    TreeNode* root = sortedArrayToBalancedBST(arr,0,size-1);
    cout << "In-Order Traversal: ";
    inOrderTraversal(root);
    cout << endl;
    return 0;
}