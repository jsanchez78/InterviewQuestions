#include <iostream>
#include <algorithm>
/*
The Node struct is defined as follows:

*/
    struct Node {
        int data;
        Node* left;
        Node* right;
    };


  int max_value_L(Node* r){
    //Full tree
    if(r->left != nullptr && r->right != nullptr)
        return std::max(std::max(r->data,max_value_L(r->left)),max_value_L(r->right));
    //Left subtree empty
    else if(r->left == nullptr && r->right != nullptr)
      return std::max(r->data,max_value_L(r->right));
    //Right Subtree empty
    else
      return std::max(r->data,max_value_L(r->left));
  }
  int min_value_R(Node* r){
    //Full tree
    if(r->left != nullptr && r->right != nullptr)
        return std::min(std::min(r->data,min_value_R(r->left)),min_value_R(r->right));
    //Left subtree empty
    else if(r->left == nullptr && r->right != nullptr)
        return std::min(r->data,min_value_R(r->right));
    //Right Subtree empty
    else
      return std::min(r->data,min_value_R(r->left));
  }
  bool _checkBST(Node* r,int max_Left,int min_Right){
    //Base case (root violation)
    if(r->data < max_Left || r->data > min_Right)
      return false;
    //Left subtree violation
    if(r->left != nullptr && r->right == nullptr)
      return _checkBST(r->left,max_Left,min_Right);
    //Right subtree violation
    else if(r->right != nullptr && r->left == nullptr)
      return _checkBST(r->right,max_Left,min_Right);
    //Check both
    else
      return (_checkBST(r->left,max_Left,min_Right) && _checkBST(r->right,max_Left,min_Right));

  }
    bool checkBST(Node* root) {
    //Empty tree or single node
    if(root == nullptr || (root->left == nullptr && root->right == nullptr))
      return true;
    //Max max_value_L
    int max_L,min_R;
    //Full tree
    if(root->left != nullptr && root->right !=nullptr){
      max_L = max_value_L(root->left);
      //Min value right Subtree
      min_R = min_value_R(root->right);

    }
    //Left subtree empty
    else if(root->left == nullptr){
      max_L = -1;
      min_R = min_value_R(root->right);
    }
    //Right subtree empty
    else{
      max_L = max_value_L(root->left);
      min_R = 100000000;
    }

    return _checkBST(root,max_L,min_R);
    }

    int main(){

      //checkBST();
      return 0;
    }
