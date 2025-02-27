#include <iostream>
using namespace std;
class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int value){
        data = value;
        left = nullptr;
        right = nullptr;
    }
};
void inOrderTraversal(TreeNode* root){ // LDR
    if(root != nullptr){
        inOrderTraversal(root->left);
        cout << root->data << " ";
        inOrderTraversal(root->right);
    }
}
// Three important functions: Insert, Search, Delete
// Left < Node < Right
TreeNode* insert(TreeNode* root, int key){
    if(root == nullptr){
        // Make the new node the root & return 
        return new TreeNode(key); 
    }
    if(key < root->data){
        root->left = insert(root->left, key);
    }else if(key > root->data){
        root->right = insert(root->right, key);
    }
    return root;
}
TreeNode* search(TreeNode* root, int key){
    // Root is null -> return root node
    // Root has the key -> return root node
    if(root == nullptr || root->data == key){
        return root;
    }
    if(root->data < key){
        return search(root->right, key);
    }
    return search(root->left, key);
}
TreeNode* findMin(TreeNode* root){
    TreeNode* current = root;
    while(current && current->left != nullptr){
        current = current->left;
    }
    return current;
}
TreeNode* deleteNode(TreeNode* root, int key){
    // Empty tree, we can't delete the key
    if(root == nullptr){
        return root;
    }
    if(key < root->data){
        root->left = deleteNode(root->left, key);
    }else if(key > root->data){
        root->right = deleteNode(root->right, key);
    }else{
        // Only one child
        if(root->left == nullptr){
            TreeNode* temp = root->right;
            delete root;
            return temp;        
        }else if(root->right == nullptr){
            TreeNode* temp = root->left;
            delete root;
            return temp;
        }
        // Node with 2 children
        // Find the in-order successor
        // The in-order successor is the least value
        // on the right subtree
        TreeNode* temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}
int main(){
    TreeNode* root = nullptr;
    root = insert(root, 8);
    cout << "Inorder Traversal: ";
    inOrderTraversal(root);
    cout << endl;
    int arr[] = {6,2,9,7,12,15,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<size; i++){
        root = insert(root, arr[i]);
    } 
    inOrderTraversal(root);
    cout << endl;
    int key = 91;
    TreeNode* result = search(root, key);
    if(result == nullptr){
        cout << "Key " << key << " is not present in BST.\n"; 
    }else{
        cout << "Key " << key << " is present in BST.\n";
    }
    cout << "Delete:12\n";
    root = deleteNode(root, 12);
    inOrderTraversal(root);
    cout << endl;
    cout << "Delete:8\n";
    root = deleteNode(root, 8);
    inOrderTraversal(root);
    cout << endl;
    return 0;
}