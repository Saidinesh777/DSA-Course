#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *left;
    Node *right;
    Node(int ele){
        data = ele;
        left = right = nullptr;
    }
};

class BST{
    Node *root;

    void inorder_traverse(Node *root){
        if(root == nullptr) return;

        inorder_traverse(root->left);
        cout<<root->data<<" ";
        inorder_traverse(root->right);
    }

    void postorder_traverse(Node *root){
        if(root == nullptr) return;
        
        postorder_traverse(root->left);
        postorder_traverse(root->right);
        cout<<root->data<<" ";
    }

    void preorder_traverse(Node *root){
            if(root == nullptr) return;
            
            cout<<root->data<<" ";
            preorder_traverse(root->left);
            preorder_traverse(root->right);
        }

    public:
    BST(){
         root = nullptr;
    }
  
    // void insert_ele(int ele){

    // }
    // bool is_present(int ele){}

    void inorder(){
        if(root == nullptr){
            cout<<"Tree Empty"<<endl;
            return;
        }
        cout<<"Inorder:";
        inorder_traverse(root);
        return;
    }

    void postorder(){
        if(root == nullptr){
            cout<<"Tree Empty"<<endl;
            return;
        }
        cout<<"Postorder:";
        postorder_traverse(root);
        return;
    }

    void preorder(){
        if(root == nullptr){
            cout<<"Tree Empty"<<endl;
            return;
        }
        cout<<"Preorder:";
        preorder_traverse(root);
        return;
    }
};

int main(){
    BST tree;
    // vector<int> arr = {56,33,24,56,98,11,45,69,6,23,45,77,43};
    
    // for(int ele : arr){
    //     tree.insert_ele(ele);
    // }
    tree.inorder();
    tree.postorder();
    tree.preorder();

    return 0;
}