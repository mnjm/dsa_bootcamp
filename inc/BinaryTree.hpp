#ifndef TREE_HPP
#define TREE_HPP

struct BinaryTreeNode {
    int val;
    BinaryTreeNode* left;
    BinaryTreeNode* right;
    // Inline constructor
    BinaryTreeNode(int _val) : val(_val), left(nullptr), right(nullptr) {}
};

void display_tree(BinaryTreeNode*);

#endif
