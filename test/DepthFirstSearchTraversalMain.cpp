#include "DepthFirstTraversal.hpp"
#include <iostream>

// Function to create and populate a binary tree
BinaryTreeNode* createBinaryTree1() {
    BinaryTreeNode* root = new BinaryTreeNode(1);
    root->left = new BinaryTreeNode(2);
    root->right = new BinaryTreeNode(3);
    root->left->left = new BinaryTreeNode(4);
    root->left->right = new BinaryTreeNode(5);
    return root;
}

// Function to create and populate another binary tree
BinaryTreeNode* createBinaryTree2() {
    BinaryTreeNode* root = new BinaryTreeNode(10);
    root->left = new BinaryTreeNode(20);
    root->right = new BinaryTreeNode(30);
    root->left->left = new BinaryTreeNode(40);
    root->left->right = new BinaryTreeNode(50);
    root->right->left = new BinaryTreeNode(60);
    root->right->right = new BinaryTreeNode(70);
    return root;
}

void print_vector(Vector vec) {
    std::size_t len = vec.size();
    for (int i=0; i < len; ++i) {
        std::cout << vec.at(i) << " ";
    }
    std::cout << std::endl;
}

void test_traversal(BinaryTreeNode* root) {
    Vector preorder, inorder, postorder;

    pre_order_traversal(root, preorder);
    in_order_traversal(root, inorder);
    post_order_traversal(root, postorder);

    std:: cout << "Preorder traversal ";
    print_vector(preorder);
    std:: cout << "Postorder traversal ";
    print_vector(postorder);
    std:: cout << "Inorder traversal ";
    print_vector(inorder);
}

int main (int argc, char *argv[]) {
    BinaryTreeNode* example1 = createBinaryTree1();
    BinaryTreeNode* example2 = createBinaryTree2();

    std::cout << "Example 1" << std::endl;
    test_traversal(example1);
    std::cout << "Example 2" << std::endl;
    test_traversal(example2);

    return 0;
}
